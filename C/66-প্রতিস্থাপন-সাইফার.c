#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

char first_text[80], second_text[80];

void encryped_text(char *thrid_text) {
    int i, j, is = 1;
    for (i = 0; thrid_text[i] != '\0'; i++) {
        if (thrid_text[i] >= 'a' && thrid_text[i] <= 'z') {
            for (j = 0; first_text[j] != '\0'; j++) {
                if (first_text[j] == thrid_text[i]) {
                    printf("%c", second_text[j]);
                    is = 0;
                    break;
                }
            }
            if (is) printf("%c", thrid_text[i]);
        }
        else printf("%c", thrid_text[i]);
    }
    printf("\n");
}

int main(void) 
{

    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    
    char third_text[80];

    scanf("%[^\n]", first_text);
    scanf(" %[^\n]", second_text);
    printf("%s\n%s\n", second_text, first_text);
    while (scanf(" %[^\n]", third_text) == 1) {
        encryped_text(third_text);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, April 14, 2021 | 06:33:25 AM
// Problem Link: https://dimikoj.com/problems/66/substitution-cipher-by-tamim-shahriar-subeen
