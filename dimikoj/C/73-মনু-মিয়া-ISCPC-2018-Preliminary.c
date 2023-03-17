#include <stdio.h>
#include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int main(void) {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    char str[202];
    scanf("%[^\n]", str);
    for (int i = strlen(str)-1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 09, 2021 | 08:45:10 AM
// Problem Link: https://dimikoj.com/problems/73/monu-miah-iscpc-2018-preliminary
