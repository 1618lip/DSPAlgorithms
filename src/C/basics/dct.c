#include <stddef.h>

// Computes the Discrete Cosine Transform of an input signal.
// input: pointer to the input signal
// output: pointer to the DCT coefficients
// n: number of samples
void dct(const double *input, double *output, size_t n);
