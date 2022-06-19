#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
 
int main(void) 
{
    char ternary_number[204];
    char decoded[204];
    scanf("%s", ternary_number);
    int i, j;
 
    for (i=0, j=0; ternary_number[i]; ) {
        if (ternary_number[i]=='-' && ternary_number[i+1]=='-') {
            decoded[j] = '2';
            i += 2;
            j++;
        }
        else if (ternary_number[i]=='-' && ternary_number[i+1]=='.') {
            decoded[j] = '1';
            i += 2;
            j++;
        }
        else if (ternary_number[i]=='.') {
            decoded[j] = '0';
            i++;
            j++;
        }
    }
    decoded[j] = '\0';
    printf("%s\n", decoded);
    
    return 0;
}