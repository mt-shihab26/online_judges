#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    char ins[102];

    scanf("%[^\n]", ins);

    for (int i=0; ins[i]; i++)
        if (ins[i]=='H' || ins[i]=='Q' || ins[i]=='9') {
            printf("YES\n");
            return 0;
        }
    printf("NO\n");
    
    return 0;
}
// Author: Shihab Mahamud
// Date: মঙ্গলবার, মে 18, 2021 | 09:37:19 অপরাহ্ণ +06 (+06)
// Problem Link: 
