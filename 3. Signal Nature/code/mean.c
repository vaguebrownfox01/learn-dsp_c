// mean | mu : sum of signed samples divided by the size.
// deviation | variance : sum of difference between samples and the mean value divided by the size.
// std. dev. | sigma : square root of the variance.
// Power (P) is proportional to Voltage (V) squared.
// Root Mean Squared | RMS : squared samples divided by the size, under square root.
// mean is the DC component
// std. dev. measures AC portion of the signal
// if RMS == std. dev. => there is no DC component

// mean measures whats being measured
// std. dev represents noise and other interferences
// Signal to Noise Ratio | SNR : mean over std. dev.
// Coefficient of Variation | CV : SNR * 100

#include <stdio.h>
#include <stdlib.h>

double calc_sig_mean(double *sig_src_arr, int sig_length)
{
    double _mean = 0.0;

    for (int i = 0; i < sig_length; i++)
    {
        _mean += sig_src_arr[i];
    }

    _mean /= (double)sig_length;

    return _mean;
}