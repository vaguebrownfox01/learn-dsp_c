#include <stdio.h>
#include <stdlib.h>

#define SIG_LENGTH 320
#define IMP_RSP_LENGTH 29

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];
extern double Impulse_response[IMP_RSP_LENGTH];

void write_signal_to_file(char *filename, double *signal_arr, int sig_length);
void convolve(double *sig_src_arr, double *sig_dest_arr, double *imp_resp_arr, int sig_src_length, int imp_resp_length);
void calc_running_sum(double *sig_src_arr, double *sig_dest_arr, int sig_length);
int main()
{

    int out_sig_length = SIG_LENGTH + IMP_RSP_LENGTH;
    double Convlution_OutputSignal[SIG_LENGTH + IMP_RSP_LENGTH];
    double Running_Sum_OutputSignal[SIG_LENGTH];

    convolve((double *)&InputSignal_f32_1kHz_15kHz[0],
             (double *)&Convlution_OutputSignal[0],
             (double *)&Impulse_response[0],
             (int)SIG_LENGTH,
             (int)IMP_RSP_LENGTH);
    calc_running_sum((double *)&InputSignal_f32_1kHz_15kHz[0],
                     (double *)&Running_Sum_OutputSignal[0],
                     (int)SIG_LENGTH);

    write_signal_to_file("d_input_sig.dat", (double *)&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    write_signal_to_file("d_impulse_response.dat", (double *)&Impulse_response[0], IMP_RSP_LENGTH);
    write_signal_to_file("d_convoluted_sig.dat", (double *)&Convlution_OutputSignal[0], out_sig_length);
    write_signal_to_file("d_running_sum_sig.dat", (double *)&Running_Sum_OutputSignal[0], SIG_LENGTH);

    return 0;
}

void write_signal_to_file(char *filename, double *signal_arr, int sig_length)
{
    FILE *signal_fptr;
    signal_fptr = fopen(filename, "w");

    for (int i = 0; i < sig_length; i++)
    {
        fprintf(signal_fptr, "\n%f", signal_arr[i]);
    }
    fclose(signal_fptr);

    printf("\nfinished writing file: %s", filename);
}
