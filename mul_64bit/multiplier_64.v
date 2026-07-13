// Unsigned 64-bit x 64-bit sequential shift-and-add multiplier

`timescale 1ns/1ps

module multiplier_64x64 (
    input  wire         clk,
    input  wire         reset,
    input  wire         start,
    input  wire [63:0]  multiplicand_in,
    input  wire [63:0]  multiplier_in,
    output reg  [127:0] product,
    output reg          busy,
    output reg          done
);

    reg [127:0] multiplicand_reg;
    reg [63:0]  multiplier_reg;
    reg [6:0]   count;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            multiplicand_reg <= 128'd0;
            multiplier_reg   <= 64'd0;
            product          <= 128'd0;
            count            <= 7'd0;
            busy             <= 1'b0;
            done             <= 1'b0;
        end else begin
            // done is asserted for one clock cycle
            done <= 1'b0;

            if (start && !busy) begin
                multiplicand_reg <= {64'd0, multiplicand_in};
                multiplier_reg   <= multiplier_in;
                product          <= 128'd0;
                count            <= 7'd0;
                busy             <= 1'b1;
            end else if (busy) begin
                if (multiplier_reg[0])
                    product <= product + multiplicand_reg;

                multiplicand_reg <= multiplicand_reg << 1;
                multiplier_reg   <= multiplier_reg >> 1;
                count            <= count + 1'b1;

                if (count == 7'd63) begin
                    busy <= 1'b0;
                    done <= 1'b1;
                end
            end
        end
    end

endmodule
