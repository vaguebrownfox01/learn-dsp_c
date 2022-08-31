#include <math.h>

void calc_sig_dft(double *sig_src_arr, double *sig_dst_rex_arr, double *sig_dst_imx_arr, double *sig_dst_dft_mag_arr, int sig_length)
{
    for (int j = 0; j < sig_length / 2; j++)
    {
        sig_dst_rex_arr[j] = 0;
        sig_dst_imx_arr[j] = 0;
    }

    for (int k = 0; k < sig_length / 2; k++)
    {
        for (int i = 0; i < sig_length; i++)
        {
            sig_dst_rex_arr[k] = sig_dst_rex_arr[k] + sig_src_arr[i] * cos(2 * M_PI * k * i / sig_length);
            sig_dst_imx_arr[k] = sig_dst_imx_arr[k] - sig_src_arr[i] * sin(2 * M_PI * k * i / sig_length);
        }

        sig_dst_dft_mag_arr[k] = sqrt(pow(sig_dst_rex_arr[k], 2) + pow(sig_dst_imx_arr[k], 2));
    }
}
