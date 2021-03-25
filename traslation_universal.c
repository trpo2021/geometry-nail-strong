#include "lib_transation_universal.h"
void translation_universal(char *UKAZATEL, double *x1)
{
    char *point;
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
