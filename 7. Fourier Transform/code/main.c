#include <stdio.h>
#include <stdlib.h>

#include "waveform.h"
#include "fourier.h"
#include "utils.h"

int main()
{
    printf("Fourier Transform: DFT\n");

    const int out_sig_length = (int)(SIG_LENGTH / 2);
    double DFT_rex_output[SIG_LENGTH / 2];
    double DFT_imx_output[SIG_LENGTH / 2];
    double DFT_mag_output[SIG_LENGTH / 2];

    // DFT
    calc_sig_dft(
        (double *)&InputSignal_f32_1kHz_15kHz[0],
        (double *)&DFT_rex_output[0],
        (double *)&DFT_imx_output[0],
        (double *)&DFT_mag_output[0],
        (int)SIG_LENGTH);

    write_signal_to_file((char *)"exports/d_input_sig.dat", (double *)&InputSignal_f32_1kHz_15kHz[0], (int)SIG_LENGTH);
    write_signal_to_file((char *)"exports/d_output_dft_rex_sig.dat", (double *)&DFT_rex_output[0], (int)out_sig_length);
    write_signal_to_file((char *)"exports/d_output_dft_imx_sig.dat", (double *)&DFT_imx_output[0], (int)out_sig_length);
    write_signal_to_file((char *)"exports/d_output_dft_mag_sig.dat", (double *)&DFT_mag_output[0], (int)out_sig_length);

    // IDFT
    double IDFT_sig_output[SIG_LENGTH];

    calc_sig_idft(
        (double *)&DFT_rex_output[0],
        (double *)&DFT_imx_output[0],
        (double *)&IDFT_sig_output[0],
        (int)SIG_LENGTH);

    write_signal_to_file((char *)"exports/d_output_idft_sig.dat", (double *)&IDFT_sig_output[0], (int)SIG_LENGTH);

    return 0;
}