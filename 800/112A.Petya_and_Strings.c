#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    char first_string[102], second_string[102];
    scanf("%s %s", first_string, second_string);

    int i;

    for (i = 0; i < strlen(first_string); i++) {
        if (first_string[i] >= 'A' && first_string[i] <= 'Z')
            first_string[i] = first_string[i] + 32;
        if (second_string[i] >= 'A' && second_string[i] <= 'Z')
            second_string[i] = second_string[i] + 32;
        if (first_string[i] < second_string[i]) {
            printf("-1\n");
            break;
        }
        else if (first_string[i] > second_string[i]) {
            printf("1\n");
            break;
        }
        else if (i == (strlen(first_string) - 1))
            printf("0\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: রবিবার, ফেব্রুয়ারী 14, 2021 | 18:59:32
