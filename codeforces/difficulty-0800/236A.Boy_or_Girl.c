#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    char user_name[102];
    scanf("%s", user_name);
    int i, j;

    int main_len = strlen(user_name);
    int distinct_len = main_len;
    for (i=0; i<main_len; i++)
        for (j=i+1; j<main_len; j++)
            if (user_name[i]==user_name[j]) {
               distinct_len--;
               break;
            }
    printf("%s\n", distinct_len%2==0 ? "CHAT WITH HER!":"IGNORE HIM!");

    return 0;
}
// Author: p-nerd
// Date: Saturday, May 22, 2021 | 10:45:44 PM (+06)
