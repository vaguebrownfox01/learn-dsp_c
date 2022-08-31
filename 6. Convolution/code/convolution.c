#include <stdio.h>
#include <stdlib.h>

void convolve(double *sig_src_arr,
              double *sig_dest_arr,
              double *imp_resp_arr,
              int sig_src_length,
              int imp_resp_length)
{
    int i, j;
    int _output_length = sig_src_length + imp_resp_length;

    for (i = 0; i < _output_length; i++)
    {
        sig_dest_arr[i] = 0;
    }

    for (i = 0; i < sig_src_length; i++)
    {
        for (j = 0; j < imp_resp_length; j++)
        {
            sig_dest_arr[i + j] += sig_src_arr[i] * imp_resp_arr[j];
        }
    }
}