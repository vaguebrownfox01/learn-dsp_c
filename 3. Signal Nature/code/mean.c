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