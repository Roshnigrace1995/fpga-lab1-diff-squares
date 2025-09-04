#include "compute_c.h"

ap_int<32> compute_c(ap_int<16> a, ap_int<16> b) {
    // Widen to 32-bit before multiplication to avoid overflow
    ap_int<32> a2 = (ap_int<32>)a * (ap_int<32>)a;
    ap_int<32> b2 = (ap_int<32>)b * (ap_int<32>)b;
    return a2 - b2;
}
