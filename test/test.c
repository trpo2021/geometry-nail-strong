#include "ctest.h"
#include "libgeometry/lib_input.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

CTEST(input, finding_comma)
{
    char* string = "circle(1 1,3)";
    char* ukazatel = string;
    bool answer = finding_comma(ukazatel);
    ASSERT_TRUE(answer);
}
CTEST(input, finding_bracket)
{
    char* string = "circle(1 1,3)";
    char* ukazatel = string;
    bool answer = finding_bracket(ukazatel);
    ASSERT_TRUE(answer);
}
CTEST(input, finding_bracket2)
{
    char* string = "circle(1 1,3)";
    char* ukazatel = string;
    bool answer = finding_bracket2(ukazatel);
    ASSERT_TRUE(answer);
}
CTEST(input, word)
{
    char Circle[] = {"circle"};
    char* string = "circle(1 1,3)";
    char* ukazatel = string;
    int w = 6;
    int result = strncmp(Circle, ukazatel, w);
    bool answer;
    if (result == 0)
        answer = true;
    else
        answer = false;
    ASSERT_TRUE(answer);
}
