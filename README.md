# FPGA Lab 1 – Difference of Squares (Vivado HLS)

This repository contains the source code for Lab 1 of ECE 350/450.

## Files
- `compute_c.h` : Header file with function declaration
- `compute_c.cpp` : Function implementation (computes a² - b²)
- `tb_diff_squares.cpp` : Testbench used for C Simulation

## How to Use
1. Create a new Vivado HLS project.
2. Add `compute_c.h` and `compute_c.cpp` as design sources.
3. Add `tb_diff_squares.cpp` as a testbench.
4. Set **Top Function** = `compute_c`.
5. Run C Simulation and C Synthesis.

## Author
Roshni Grace Vijayan
