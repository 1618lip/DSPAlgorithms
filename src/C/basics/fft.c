#include <stddef.h>

// Computes the FFT of a real or complex sequence.
// input: pointer to the input array
// output: pointer to the output array (complex values, e.g., interleaved real/imag)
// n: number of samples
void fft(const double *input, double *output, size_t n);
