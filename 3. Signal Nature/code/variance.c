#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "stat.h"

double calc_sig_variance(double *sig_src_arr, int sig_len)
{
    double _variance = 0.0;

    double sig_mean = calc_sig_mean(sig_src_arr, sig_len);

    for (int i = 0; i < sig_len; i++)
    {
        _variance += pow(sig_src_arr[i] - sig_mean, 2);
    }
    _variance /= sig_len - 1;

    return _variance;
}