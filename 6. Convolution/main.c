#include <stdio.h>
#include <stdlib.h>

#define SIG_LENGTH 320
#define IMP_RSP_LENGTH 29

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];
extern double Impulse_response[IMP_RSP_LENGTH];

void write_signal_to_file(char *filename, double *signal_arr, int sig_length);
void convolution(double *sig_src_arr, double *sig_dest_arr, double *imp_resp_arr, int sig_src_length, int imp_resp_length);

int main()
{

    int out_sig_length = SIG_LENGTH + IMP_RSP_LENGTH;
    double OutputSignal[SIG_LENGTH + IMP_RSP_LENGTH];

    convolution((double *)&InputSignal_f32_1kHz_15kHz[0],
                (double *)&OutputSignal[0],
                (double *)&Impulse_response[0],
                (int)SIG_LENGTH,
                (int)IMP_RSP_LENGTH);

    write_signal_to_file("input_sig.dat", (double *)&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    write_signal_to_file("impulse_response.dat", (double *)&Impulse_response[0], IMP_RSP_LENGTH);
    write_signal_to_file("convoluted_sig.dat", (double *)&OutputSignal[0], out_sig_length);

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