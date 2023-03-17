#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdbool.h>

int main(void) {
    char first_line[102], second_line[102];
    scanf("%s\n%s", first_line, second_line);

    for (int i=0; first_line[i]; i++)
        printf("%c", first_line[i]!=second_line[i] ? '1':'0');
    printf("\n");
    
    return 0;
}
// Author: p-nerd
// Date: Monday, May 24, 2021 | 01:51:00 AM (+06)
