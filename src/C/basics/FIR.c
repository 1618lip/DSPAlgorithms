#include <stddef.h>

// Applies an FIR filter to the input data.
// input: pointer to the input signal
// coeffs: pointer to the filter coefficients
// output: pointer to the filtered signal
// n: length of the input signal
// m: number of filter taps
void fir_filter(const double *input, const double *coeffs, double *output, size_t n, size_t m);
