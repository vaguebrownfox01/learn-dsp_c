// gcc code/*.c -o mac.out & ./mac.out

#include <stdio.h>
#include <stdlib.h>

#include "waveform.h"
#include "dsp_c.h"
#include "util.h"

int main()
{

    const int out_sig_length = SIG_LENGTH + IMP_RSP_LENGTH;
    double Convlution_OutputSignal[SIG_LENGTH + IMP_RSP_LENGTH];
    double Running_Sum_OutputSignal[SIG_LENGTH];
    double First_Diff_OutputSignal[SIG_LENGTH];

    convolve((double *)&InputSignal_f32_1kHz_15kHz[0],
             (double *)&Convlution_OutputSignal[0],
             (double *)&Impulse_response[0],
             (int)SIG_LENGTH,
             (int)IMP_RSP_LENGTH);

    calc_running_sum((double *)&InputSignal_f32_1kHz_15kHz[0],
                     (double *)&Running_Sum_OutputSignal[0],
                     (int)SIG_LENGTH);

    calc_first_difference((double *)&InputSignal_f32_1kHz_15kHz[0],
                          (double *)&First_Diff_OutputSignal[0],
                          (int)SIG_LENGTH);

    printf("\n");
    write_signal_to_file("exports/d_input_sig.dat", (double *)&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    write_signal_to_file("exports/d_impulse_response.dat", (double *)&Impulse_response[0], IMP_RSP_LENGTH);
    write_signal_to_file("exports/d_convoluted_sig.dat", (double *)&Convlution_OutputSignal[0], out_sig_length);
    write_signal_to_file("exports/d_running_sum_sig.dat", (double *)&Running_Sum_OutputSignal[0], SIG_LENGTH);
    write_signal_to_file("exports/d_first_diff_sig.dat", (double *)&First_Diff_OutputSignal[0], SIG_LENGTH);
    printf("\n");

    return 0;
}
