#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

#define strtoint atoi

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    char num[4];
    int new_num, orginal_num;
    int t, i, temp;

    scanf("%d", &t);
    while (t--) {
        new_num = 0;
        scanf(" %s", num);
        for (i = 0; i < 3; i++) {
            temp = num[i] - '0';
            new_num += temp*temp*temp;
        }
        orginal_num = strtoint(num);
        if (orginal_num == new_num) 
            printf("%d is an armstrong number!\n", orginal_num);
        else printf("%d is not an armstrong number!\n", orginal_num);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 01:17:50
// Problem Link: https://dimikoj.com/problems/27/armstrong-number-by
