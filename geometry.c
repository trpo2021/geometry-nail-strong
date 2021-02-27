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
    int main()
    {
        int Q = 228;
        double Z[339];
        char str[Q];
        char Circle[] = {"circle"};
        fgets(str);
        finding_comma(str);
        finding_bracket(str);
        finding_bracket2(str);
    return 0;
}
