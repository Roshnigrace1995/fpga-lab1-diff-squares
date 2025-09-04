#include <iostream>
#include "compute_c.h"

int main() {
    ap_int<16> a, b;
    ap_int<32> result;

    // Test case 1
    a = 5; b = 3;
    result = compute_c(a, b);
    std::cout << "a=5, b=3, result=" << result << " (expected 16)" << std::endl;

    // Test case 2
    a = -7; b = 2;
    result = compute_c(a, b);
    std::cout << "a=-7, b=2, result=" << result << " (expected 45)" << std::endl;

    // Test case 3
    a = 0; b = 0;
    result = compute_c(a, b);
    std::cout << "a=0, b=0, result=" << result << " (expected 0)" << std::endl;

    // Test case 4 (boundary)
    a = 32767; b = 32766;
    result = compute_c(a, b);
    std::cout << "a=32767, b=32766, result=" << result << std::endl;

    return 0;
}
