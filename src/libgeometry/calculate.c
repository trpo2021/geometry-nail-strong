#include "lib_calculate.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void calculation(double* Z)
{
    float pi = 3.1415;
    float S;
    float P;
    P = 2 * pi * Z[2];
    S = pi * Z[2] * Z[2];
    printf("P = %f\n", P);
    printf("S = %f\n", S);
}
