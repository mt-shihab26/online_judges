#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int hash_key(char *str);

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t;
   
    scanf("%d", &t);
    while (t--) {
        char str1[22], str2[22];
        scanf(" %s %s", str1, str2);
        if (hash_key(str1) == hash_key(str2)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

int hash_key(char *str)
{
    long mul = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        mul *= (int) str[i];
        mul %= 97;
    }
    return mul;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 05:20:18 PM
// Problem Link: https://dimikoj.com/problems/54/hash-key-by
