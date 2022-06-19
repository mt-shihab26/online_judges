#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t, len, i;
    char str[52], new_str[52], temp;
    
    scanf("%d", &t); 
    while (t--)
    {
        scanf(" %[^\n]", str);
        // printf("%s\n", str);
        len = strlen(str);
        for (i = 0; i < len; i++) {
            if (str[i] == 'L') {
                temp = str[i-1];
            }
            else if (str[i] == 'R') {
                temp = str[i+1];
            }
            else {
                temp = str[i];
            }
            printf("%c", temp);
        }
        printf("\n");
    }
    

    return 0;
}
// Author: Shihab Mahamud
// Date: Wed 10 Feb 2021 04:06:07 PM +06
