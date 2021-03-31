#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib_input.h"
#include "lib_calculate.h"
#include "lib_translation_universal.h"
int main()
{
    int Q = 228;
    double Z[339];
    char str[Q];
    char *UKAZATEL = str;
    char *UKAZATEL2 = str;
    char Circle[] = {"circle"};
fgets(str, Q, stdin);
if (isalpha(*UKAZATEL) != 0) {
    while (isalpha(*UKAZATEL2) != 0)
        UKAZATEL2++;
}
if (correct(Circle, str, Q) == true) {
    UKAZATEL = UKAZATEL2;
    printf("approved\n");
}
correct(Circle,UKAZATEL,Z);
translation_universal(UKAZATEL, Z);
calculation(Z);
system("pause");
return 0;
}
