#include <stdio.h>
#include <stdlib.h>
#include "stat.h"

double calc_sig_cov(double *sig_src_arr, int sig_length)
{
    double _snr = calc_sig_snr(sig_src_arr, sig_length);

    double _cov = _snr * 100;

    return _cov;
}