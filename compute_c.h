#ifndef COMPUTE_C_H
#define COMPUTE_C_H

#include "ap_int.h"

// Top function for HLS
// Inputs: a, b (16-bit signed)
// Output: c_sq (32-bit signed) = a^2 - b^2
ap_int<32> compute_c(ap_int<16> a, ap_int<16> b);

#endif // COMPUTE_C_H
