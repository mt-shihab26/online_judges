#include <stdio.h>
// #include <string.h>
// #include <math.h>
#include <ctype.h>
// #include <stdlib.h>

int main(void) {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    char str[1000];
    int key, i, j;
    
    scanf("%[^\n]", str);
    scanf("%d", &key);

    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ",
         lower[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = 0; j <= 30; j++) {
                if (str[i] == lower[j]) {
                    printf("%c", lower[j+key]);
                    break;
                }
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            for (j = 0; j < 30; j++) {
                if (str[i] == upper[j]) {
                    printf("%c", upper[j+key]);
                    break;
                }
            }
        }
        else 
            printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 09, 2021 | 07:25:58 AM
// Problem Link: https://dimikoj.com/problems/63/caesar-cipher-1-by
