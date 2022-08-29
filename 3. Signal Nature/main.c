#include <stdio.h>
#include <stdlib.h>

#define SIG_LENGTH 320

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];

double calc_sig_mean(double *sig_src_arr, int sig_length);
double calc_sig_variance(double *sig_src_arr, double sig_mean, int sig_len);
double calc_sig_stddev(double sig_variance);

double MEAN;
double VARIANCE;
double STD_DEV;

int main()
{
    MEAN = calc_sig_mean(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    VARIANCE = calc_sig_variance(&InputSignal_f32_1kHz_15kHz[0], MEAN, SIG_LENGTH);
    STD_DEV = calc_sig_stddev(VARIANCE);

    printf("\n\n\nMean: %f", MEAN);
    printf("\n\nVariance: %f", VARIANCE);
    printf("\n\nStd. dev.: %f\n\n\n", STD_DEV);

    return 0;
}
