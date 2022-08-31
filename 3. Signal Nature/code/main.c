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

    MEAN = calc_sig_mean(&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    VARIANCE = calc_sig_variance(&InputSignal_f32_1kHz_15kHz[0], MEAN, SIG_LENGTH);
    STD_DEV = calc_sig_stddev(VARIANCE);

    printf("\n\n\nMean: %f", MEAN);
    printf("\n\nVariance: %f", VARIANCE);
    printf("\n\nStd. dev.: %f\n\n\n", STD_DEV);

    return 0;
}
