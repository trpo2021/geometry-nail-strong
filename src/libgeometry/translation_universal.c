#include "lib_translation_universal.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void translation_universal(char* UKAZATEL, double* x1)
{
    char* point;
    double c;
    int i = 0;
    while (isdigit(*UKAZATEL) == 0) {
        UKAZATEL++;
        if (isdigit(*UKAZATEL) != 0) {
            c = strtod(UKAZATEL, &point);
            x1[i] = c;
            i++;
            UKAZATEL = point;
            if (i == 3)
                break;
        } else {
            printf("expected '<double>'\n");
            system("pause");
            break;
        }
    }
}
