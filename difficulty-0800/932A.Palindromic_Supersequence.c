#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// this function check a word is palindrome or not
// if word palindrome function return 1, otherwise return 0;
int is_palindrome(char *word) {
    int i, len = strlen(word), j;
    for (i=0, j=len-1; i<((int)len/2); i++, j--) {
        if (word[i] != word[j]){
            return 0;
        }
    }
    return 1;
}

// this function get a main string and reverced the string into reverced parameter
void reverce_str(char *main, char *reverced) {
    int len = strlen(main), i, j;
    for (i=0, j=len-2; i<len; i++, j--)
        reverced[i] = main[j];
    reverced[i] = '\0';
}

int main(void) {
    char a[10002];
    scanf("%s", a);

    if (is_palindrome(a)) {
        printf("%s\n", a);
        return 0;
    }

    int len = strlen(a);
    char reverce_a[len+1];
    reverce_str(a, reverce_a);
    printf("%s%s\n", a, reverce_a);

    return 0;
}
// Author: shh26b
// Date: Thursday, May 20, 2021 | 07:55:59 PM (+06)
