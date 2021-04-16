#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool finding_comma(char* UKAZATEL)
{
    int flag = 0;
    while (*UKAZATEL != 10) {
        if (*UKAZATEL == ',') {
            flag = 1;
            break;
        }
        UKAZATEL++;
    }
    if (flag == 0)
        return false;
    return true;
}
bool finding_bracket(char* UKAZATEL)
{
    int flag = 0;
    while (*UKAZATEL != 10) {
        if (*UKAZATEL == '(') {
            flag = 1;
            break;
        }
        UKAZATEL++;
    }
    if (flag == 0)
        return false;
    return true;
}
bool finding_bracket2(char* UKAZATEL)
{
    int flag = 0;
    while (*UKAZATEL != 10) {
        if (*UKAZATEL == ')') {
            flag = 1;
            break;
        }
        UKAZATEL++;
    }
    if (flag == 0)
        return false;
    return true;
}
bool correct(char* Circle, char* UKAZATEL)
{
    int w = 6, check = 0;
    if (strncmp(Circle, UKAZATEL, w) == 0) {
        check++;
        if (finding_bracket(UKAZATEL) == true)
            check++;
        if (finding_comma(UKAZATEL) == true)
            check++;
        if (finding_bracket2(UKAZATEL) == true)
            check++;
    } else {
        printf("error: Check the spelling of the command");
    }
    if (check == 4)
        return true;
    if (check != 4)
        return false;
    return true;
}
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
/*void calculation(double* Z)
{
    float pi = 3.1415;
    float S;
    float P;
    P = 2 * pi * Z[2];
    S = pi * Z[2] * Z[2];
    printf("P = %f\n", P);
    printf("S = %f\n", S);
}*/
/*int main()
{
    int Q = 228;
    double Z[339];
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
    }
    translation_universal(UKAZATEL, Z);
    calculation(Z);
    system("pause");
    return 0;
}*/
