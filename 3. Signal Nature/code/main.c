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
#include <math.h>

#include "waveform.h"
#include "stat.h"

int main()
{
    double MEAN;
    double VARIANCE;
    double STD_DEV;
    double SNR;
    double COV;

    MEAN = calc_sig_mean(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    VARIANCE = calc_sig_variance(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    STD_DEV = calc_sig_stddev(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    SNR = calc_sig_snr(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    COV = calc_sig_cov(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);

    printf("\n");

    printf("\n\nMean: %f", MEAN);
    printf("\n\nVariance: %f", VARIANCE);
    printf("\n\nStd. dev.: %f", STD_DEV);
    printf("\n\nSNR: %f", SNR);
    printf("\n\nCOV: %f", COV);

    printf("\n\n\n");

    return 0;
}
