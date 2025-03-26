#include <stddef.h>

// A simplified header for a Hidden Markov Model evaluation.
// observations: pointer to an array of observations
// states: pointer to an array to store the most likely states (Viterbi path)
// n_obs: number of observations
// n_states: number of states in the model
// A: state transition probability matrix (flattened)
// B: observation likelihoods matrix (flattened)
// pi: initial state distribution vector
void hmm_viterbi(const int *observations, int *states, size_t n_obs, size_t n_states,
                 const double *A, const double *B, const double *pi);
