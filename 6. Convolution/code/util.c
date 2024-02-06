#include <stdio.h>

int write_signal_to_file(const char *file_name, double* signal_arr, int sig_length)
{
    FILE *f_ptr = fopen(file_name, "w");

    if (f_ptr == NULL) {
        printf("Error opening file %s\n", file_name);
        return -1;
    }

    for (int i = 0; i < sig_length; i++) {
        fprintf(f_ptr, "%f\n", signal_arr[i]);
    }

    printf("exported signal to file: %s\n", file_name);

    fclose(f_ptr);

    return 0;
}