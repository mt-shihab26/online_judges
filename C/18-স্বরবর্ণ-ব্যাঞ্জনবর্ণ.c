#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char is_vowels(char c);

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, len, i, j, k;
    char str[1002], vowels[1002], cons[1002];

    scanf("%d", &t);
    while (t--) {
        scanf(" %[^\n]", str);

        len = strlen(str);

        for (i = 0, j = 0, k = 0; i < len; i++) {
            if (str[i] != ' ' && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
                if (is_vowels(str[i])) {
                    vowels[j] = str[i];
                    j++;
                }
                else {
                    cons[k] = str[i];
                    k++;
                }
            }
        }
        vowels[j] = '\0';
        cons[k] = '\0';
        printf("%s\n%s\n", vowels, cons);
    }

    return 0;
}

char is_vowels(char c)
{
    if (c >= 'A' && c <= 'Z') c += 32;
    switch (c) {
    case 'a': return 1;
    case 'e': return 1;
    case 'i': return 1;
    case 'o': return 1;
    case 'u': return 1;
    }
    return 0;
}

// Author: Shihab Mahamud
// Date: Wednesday, April 07, 2021 | 19:35:05