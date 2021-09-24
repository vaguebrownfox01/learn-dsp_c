#include <stdio.h>
#include <stdlib.h>

#define SIG_LENGTH 320
#define IMP_RSP_LENGTH 29

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];
extern double Impulse_response[IMP_RSP_LENGTH];

void convolution(double *sig_src_arr, double *sig_dest_arr, double *imp_resp_arr, int sig_src_length, int imp_resp_length);
void write_to_file(char *filename, double *signal_arr, int sig_length);

int main()
{

    int out_sig_length = SIG_LENGTH + IMP_RSP_LENGTH;
    double OutputSignal[SIG_LENGTH + IMP_RSP_LENGTH];

    convolution((double *)&InputSignal_f32_1kHz_15kHz[0],
                (double *)&OutputSignal[0],
                (double *)&Impulse_response[0],
                (int)SIG_LENGTH,
                (int)IMP_RSP_LENGTH);

    // FILE *input_sig_fptr;
    // FILE *impulse_sig_fptr;
    // FILE *output_sig_fptr;

    // input_sig_fptr = fopen("input_signal.dat", "w");
    // impulse_sig_fptr = fopen("impulse_sig.dat", "w");

    // for (int i = 0; i < SIG_LENGTH; i++)
    // {
    //     fprintf(input_sig_fptr, "\n%f", InputSignal_f32_1kHz_15kHz[i]);
    // }
    // fclose(input_sig_fptr);

    // for (int i = 0; i < IMP_RSP_LENGTH; i++)
    // {
    //     fprintf(impulse_sig_fptr, "\n%f", Impulse_response[i]);
    // }
    // fclose(impulse_sig_fptr);
    write_to_file("input_sig.dat", (double *)&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
    write_to_file("impulse_response.dat", (double *)&Impulse_response[0], IMP_RSP_LENGTH);
    write_to_file("convoluted_sig.dat", (double *)&OutputSignal[0], out_sig_length);

    return 0;
}

void write_to_file(char *filename, double *signal_arr, int sig_length)
{
    FILE *signal_fptr;
    signal_fptr = fopen(filename, "w");

    for (int i = 0; i < sig_length; i++)
    {
        fprintf(signal_fptr, "\n%f", signal_arr[i]);
    }
    fclose(signal_fptr);
}