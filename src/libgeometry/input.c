#include "lib_input.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool finding_comma(char*);
bool finding_bracket(char*);
bool finding_bracket2(char*);
bool correct(char*, char*);

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
        printf("error: Check the spelling of the command\n");
    }
    if (check == 4)
        return true;
    if (check != 4)
        return false;
    return true;
}

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
