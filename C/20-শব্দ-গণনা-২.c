#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, i, count;
    char str[10002];

    scanf("%d", &t);
    while (t--) {
        count = 0;
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++)
            if (str[i] == ' ' && str[i-1] != ' ') count++;
        printf("Count = %d\n", count+1);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, April 07, 2021 | 21:33:41
// Problem Link: https://dimikoj.com/problems/20/52-problem-book-counting-words-2-by-dimik-computing