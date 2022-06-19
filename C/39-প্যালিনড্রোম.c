#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t, len, i, j;
    char str[102], new_str[102];

    scanf("%d", &t);
    
    while(t--) {
        scanf(" %[^\n]", str);
        len = strlen(str);
        for(i = 0, j = len-1; i < len; i++, j--) {
            new_str[i] = str[j];
        }
        new_str[i] = '\0';
        // printf("%s\t%s\n", str, new_str);
        if (strcmp(new_str, str)) {
            printf("Sorry! It is not Palindrome!\n");
        }
        else {
            printf("Yes! It is Palindrome!\n");
        }
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Tue 09 Feb 2021 02:14:55 PM +06
