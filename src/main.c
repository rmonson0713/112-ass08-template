/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>
#include "code.h"


int main(void)
{
create_abs_txt("test.txt", -7);
    append_sqrt_txt("test.txt", 16.0);
    append_pow_txt("test.txt", 2.0, 10.0);
    append_round_txt("test.txt", 2.5);
    append_fmod_txt("test.txt", 7.5, 2.0);

    double values[10];
    int n = load_txt_values("test.txt", values, 10);
    printf("Read %d values from text file:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("  %f\n", values[i]);
    }

    clear_file("test.txt");
    printf("Size after clear: %ld\n", get_file_size("test.txt"));

    // Binary mode
    create_ceil_floor_bin("test.bin", 2.3);
    append_sqrt_bin("test.bin", 9.0);
    append_pow_bin("test.bin", 3.0, 2.0);

    n = load_bin_values("test.bin", values, 10);
    printf("Read %d values from binary file:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("  %f\n", values[i]);
    }

    double v;
    if (load_bin_value_at("test.bin", 2, &v))
    {
        printf("Value at index 2: %f\n", v);
    }
    printf("Binary file size: %ld bytes\n", get_file_size("test.bin"));

    create_abs_bin("abs.bin", -42);
    int iv;
    if (load_abs_bin("abs.bin", &iv))
    {
        printf("abs.bin: %d\n", iv);
    }

    return 0;
}
