#include <stddef.h>

// Performs convolution between two sequences.
// signal: pointer to the input signal
// kernel: pointer to the convolution kernel
// output: pointer to the output signal (convolved result)
// n: length of the input signal
// k: length of the kernel
void convolution(const double *signal, const double *kernel, double *output, size_t n, size_t k);
