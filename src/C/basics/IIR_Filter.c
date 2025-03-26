#include <stddef.h>

// Applies an IIR filter to the input signal.
// input: pointer to the input signal
// a_coeffs: pointer to the denominator coefficients (feedback)
// b_coeffs: pointer to the numerator coefficients (feedforward)
// output: pointer to the filtered signal
// n: length of the input signal
// order: order of the filter (number of coefficients)
void iir_filter(const double *input, const double *a_coeffs, const double *b_coeffs, double *output, size_t n, size_t order);
