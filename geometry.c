#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool finding_comma(char *UKAZATEL)
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
bool finding_bracket(char *UKAZATEL)
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
bool finding_bracket2(char *UKAZATEL)
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
bool correct(char* Circle, char *UKAZATEL, int Z)
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
system("pause");
return 0;
}
