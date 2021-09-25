#include <stdio.h>
#include <stdlib.h>

void calc_running_sum(double *sig_src_arr, double *sig_dest_arr, int sig_length)
{
    sig_dest_arr[0] = sig_src_arr[0];

    for (int i = 1; i < sig_length; ++i)
    {
        sig_dest_arr[i] = sig_dest_arr[i - 1] + sig_src_arr[i];
    }
}