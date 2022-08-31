#include <stdio.h>
#include <stdlib.h>

void write_signal_to_file(char *filename, double *signal_arr, int sig_length)
{
    FILE *signal_fptr;
    signal_fptr = fopen(filename, "w");

    for (int i = 0; i < sig_length; i++)
    {
        fprintf(signal_fptr, "\n%f", signal_arr[i]);
    }
    fclose(signal_fptr);

    printf("finished writing file: %s\n", filename);
}
