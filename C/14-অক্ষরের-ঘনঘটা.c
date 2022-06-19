#include <stdio.h>
#include <string.h>
#include <math.h>

void count_char(char str[], char chr) {
    int count = 0, i;
    int str_len = strlen(str);
    for (i = 0; i <= str_len; i++) {
        if (str[i] == chr) {
            count++;
        }
    }
    if (count == 0) {
        printf("'%c' is not present\n", chr);
    }
    else {
        printf("Occurrence of '%c' in '%s' = %d\n", chr, str, count);
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    int t;
    char str[10002];
    char chr;

    scanf("%d", &t);
    while (t--) {
        scanf(" %[^\n]", str);
        scanf(" %c", &chr);
        count_char(str, chr);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Sun 07 Feb 2021 06:17:26 PM +06