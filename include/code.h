//char *AUTHOR_NAME        = (char *) "Your Name";
//char *AUTHOR_AUTHORSHIP  = (char *) "I acknowledge that I have worked on this
// assignment independently, except where explicitly noted and referenced.
// Any collaboration or use of external resources has been properly cited.
// I am fully aware of the consequences of academic dishonesty and agree to
// abide by the university's academic integrity policy.";


/*
 * code.h - Assignment 8: File Access and Math Functions
 *
 * TODO 1: Add the include guard at the TOP of this file.
 *         Check whether a macro named CODE_H is NOT defined yet,
 *         and if so, define it.
 *
 * TODO 2: Include the header that provides the `bool` type.
 *
 * TODO 3: Declare (write prototypes for) all 20 functions listed below.
 *         Every prototype ends with a semicolon.
 *         Use `const` for every string that the function only reads.
 *
 * TODO 4: Close the include guard at the BOTTOM of this file.
 */
#ifndef CODE_H
#define CODE_H
#include <stdbool.h>
/* ========================= PART A: Text mode ========================= */

/*
 * 1. create_abs_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), an int value
 *
 * 2. create_fabs_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), a double value
 *
 * 3. append_sqrt_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), a double value
 *
 * 4. append_pow_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), a double base, a double exponent
 *
 * 5. create_ceil_floor_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), a double value
 *
 * 6. append_round_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), a double value
 *
 * 7. append_fmod_txt
 *    Returns: bool
 *    Parameters: the file name (read-only string), a double x, a double y
 *
 * 8. load_txt_values
 *    Returns: int (number of values read, or -1)
 *    Parameters: the file name (read-only string),
 *                a pointer to the first element of a double array (output),
 *                an int with the maximum number of values to read
 *
 * 9. clear_file
 *    Returns: bool
 *    Parameters: the file name (read-only string)
 */

/* TODO: write the prototypes for functions 1-9 here */
bool create_abs_txt(const char *filename, int value);
bool create_fabs_txt(const char *filename, double value);
bool append_sqrt_txt(const char *filename, double value);
bool append_pow_txt(const char *filename, double base, double exponent);
bool create_ceil_floor_txt(const char *filename, double value);
bool append_round_txt(const char *filename, double value);
bool append_fmod_txt(const char *filename, double x, double y);
int load_txt_values(const char *filename, double *arr, int max_count);
bool clear_file(const char *filename);



/* ========================= PART B: Binary mode ========================= */

/*
 * 10. create_abs_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), an int value
 *
 * 11. create_fabs_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), a double value
 *
 * 12. append_sqrt_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), a double value
 *
 * 13. append_pow_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), a double base, a double exponent
 *
 * 14. create_ceil_floor_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), a double value
 *
 * 15. append_round_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), a double value
 *
 * 16. append_fmod_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string), a double x, a double y
 *
 * 17. load_abs_bin
 *     Returns: bool
 *     Parameters: the file name (read-only string),
 *                 a pointer to an int (output)
 *
 * 18. load_bin_values
 *     Returns: int (number of values read, or -1)
 *     Parameters: the file name (read-only string),
 *                 a pointer to the first element of a double array (output),
 *                 an int with the maximum number of values to read
 *
 * 19. load_bin_value_at
 *     Returns: bool
 *     Parameters: the file name (read-only string),
 *                 an int index,
 *                 a pointer to a double (output)
 *
 * 20. get_file_size
 *     Returns: long (size in bytes, or -1)
 *     Parameters: the file name (read-only string)
 */

/* TODO: write the prototypes for functions 10-20 here */
bool create_abs_bin(const char *filename, int value);
bool create_fabs_bin(const char *filename, double value);
bool append_sqrt_bin(const char *filename, double value);
bool append_pow_bin(const char *filename, double base, double exponent);
bool create_ceil_floor_bin(const char *filename, double value);
bool append_round_bin(const char *filename, double value);
bool append_fmod_bin(const char *filename, double x, double y);
bool load_abs_bin(const char *filename, int *out);
int load_bin_values(const char *filename, double *arr, int max_count);
bool load_bin_value_at(const char *filename, int index, double *out);
long get_file_size(const char *filename);




/* TODO: close the include guard here */
#endif