#include <stddef.h>

// Computes the STFT of an input signal.
// input: pointer to the input signal
// output: pointer to the 2D array containing the STFT results (time-frequency)
// n: number of samples in input signal
// window_size: size of each window
// hop_size: number of samples to hop between windows
void stft(const double *input, double **output, size_t n, size_t window_size, size_t hop_size);
