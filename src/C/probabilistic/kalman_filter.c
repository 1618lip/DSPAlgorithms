#include <stddef.h>

// Implements a basic Kalman Filter.
// state: pointer to the current state vector
// cov: pointer to the state covariance matrix
// measurement: pointer to the measurement vector
// F: state transition matrix
// H: measurement matrix
// Q: process noise covariance matrix
// R: measurement noise covariance matrix
// n: state dimension, m: measurement dimension
void kalman_filter(const double *state, const double *cov, const double *measurement,
                   const double *F, const double *H, const double *Q, const double *R,
                   double *new_state, double *new_cov, size_t n, size_t m);
