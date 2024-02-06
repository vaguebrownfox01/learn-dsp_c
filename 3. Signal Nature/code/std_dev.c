#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "stat.h"

double calc_sig_stddev(double *sig_src_arr, int sig_len)
{
    double sig_variance = calc_sig_variance(sig_src_arr, sig_len);
    double _stddev = sqrt(sig_variance);

    return _stddev;
}