#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_sig_variance(double *sig_src_arr, double sig_mean, int sig_len)
{
    double _variance = 0.0;

    for (int i = 0; i < sig_len; i++)
    {
        _variance += pow(sig_src_arr[i] - sig_mean, 2);
    }
    _variance /= sig_len - 1;

    return _variance;
}