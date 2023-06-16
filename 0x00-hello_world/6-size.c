#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *     This function determines the size of various types on the computer
 *     where the program is compiled and run. It uses the sizeof operator
 *     to obtain the size of int, float, double, and char types and prints
 *     the results.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* Using sizeof to determine the size of int */
    printf("Size of int: %zu bytes\n", sizeof(int));

    /* Using sizeof to determine the size of float */
    printf("Size of float: %zu bytes\n", sizeof(float));

    /* Using sizeof to determine the size of double */
    printf("Size of double: %zu bytes\n", sizeof(double));

    /* Using sizeof to determine the size of char */
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}
