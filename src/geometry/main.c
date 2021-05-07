#include <ctype.h>
#include <libgeometry/lib_calculate.h>
#include <libgeometry/lib_input.h>
#include <libgeometry/lib_translation_universal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int Q = 228;
    double Z[339];
    double P[159];
    char str[Q];
    char* UKAZATEL = str;
    char* UKAZATEL2 = str;
    char Circle[] = {"circle"};
    fgets(str, Q, stdin);
    if (isalpha(*UKAZATEL) != 0) {
        while (isalpha(*UKAZATEL2) != 0)
            UKAZATEL2++;
    }
    if (correct(Circle, str) == true) {
        UKAZATEL = UKAZATEL2;
        printf("approved\n");
        correct(Circle, UKAZATEL);
    }
    translation_universal(UKAZATEL, Z);
    calculation(Z);
    char str2[Q];
    char* KRUG1 = str2;
    char* KRUG2 = str2;
    fgets(str2, Q, stdin);
    if (isalpha(*KRUG1) != 0) {
        while (isalpha(*KRUG2) != 0)
            KRUG2++;
    }
    if (correct(Circle, str2) == true) {
        KRUG1 = KRUG2;
        printf("approved\n");
        correct(Circle, KRUG1);
    }
    translation_universal(KRUG1, P);
    calculation(P);
    circle(Z, P);
    system("pause");
    return 0;
}
