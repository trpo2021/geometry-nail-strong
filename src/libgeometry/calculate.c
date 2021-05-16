#include "lib_calculate.h"
#include <math.h>
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
void circle_split(double* C1, double* C2)
{
    double distance;
    double x1 = C1[0];
    double y1 = C1[1];
    double x2 = C2[0];
    double y2 = C2[0];
    double radius1 = C1[2];
    double radius2 = C2[2];
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (radius1 - radius2 < distance && distance < radius1 + radius2)
        printf(" figure intersect \n");
    else
        printf(" figure not intersect \n");
}
