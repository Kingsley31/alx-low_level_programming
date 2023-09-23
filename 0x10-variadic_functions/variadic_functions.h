#include <stdio.h>
#include <stdlib.h>

#ifndef VARDICF_H
#define VARDICF_H

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);


/**
 * check_param - checks if format is null and exit the program
 * @format: first argument passed in
 * Return: void
 */
void check_param(const char * const format)
{
        if (format == NULL)
        {
                printf("(nil)\n");
                exit(0);
        }
}

#endif
