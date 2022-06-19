#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    char str[102];
    int len, count, i, j;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == '0') {
            count = 0;
            for (j = i; j < len; j++) {
                if (str[j] == '0')
                    count++;
                else 
                    break;
            }
            if (count >= 7) {
                printf("YES\n");
                return 0;
            }
        }
        else if (str[i] == '1') {
            count = 0;
            for (j = i; j <len; j++) {
                if (str[j] == '1')
                    count++;
                else
                    break;
            }
            if (count >= 7) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: রবিবার, ফেব্রুয়ারী 14, 2021 | 21:25:07
