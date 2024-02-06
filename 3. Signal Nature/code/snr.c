#include <stdio.h>
#include <stdlib.h>
#include "stat.h"

double calc_sig_snr(double *sig_src_arr, int sig_length)
{
    double _mean = calc_sig_mean(sig_src_arr, sig_length);
    double _stddev = calc_sig_stddev(sig_src_arr, sig_length);

    double _snr = _mean / _stddev;

    return _snr;
}