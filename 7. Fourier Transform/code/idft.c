#include <math.h>

void calc_sig_idft(double *sig_src_rex_arr, double *sig_src_imx_arr, double *idft_dst_arr, int idft_length)
{

    sig_src_rex_arr[0] = sig_src_rex_arr[0] / 2;
    sig_src_imx_arr[0] = -sig_src_imx_arr[0] / 2;

    for (int k = 1; k < idft_length / 2; k++)
    {
        sig_src_rex_arr[k] = sig_src_rex_arr[k] / (idft_length / 2);
        sig_src_imx_arr[k] = -sig_src_imx_arr[k] / (idft_length / 2);
    }

    for (int i = 0; i < idft_length; i++)
    {
        idft_dst_arr[i] = 0;
    }

    for (int k = 0; k < idft_length / 2; k++)
    {
        for (int i = 0; i < idft_length; i++)
        {
            idft_dst_arr[i] = idft_dst_arr[i] + sig_src_rex_arr[k] * cos(2 * M_PI * k * i / idft_length);
            idft_dst_arr[i] = idft_dst_arr[i] + sig_src_imx_arr[k] * sin(2 * M_PI * k * i / idft_length);
        }
    }
}
