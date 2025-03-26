#include <stddef.h>

// Computes the discrete wavelet transform of an input signal.
// input: pointer to the input signal
// output: pointer to the wavelet coefficients
// n: number of samples in the input signal
void wavelet_transform(const double *input, double *output, size_t n);
