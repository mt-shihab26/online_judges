#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void sort_str(char *str);
void char_count(char *str);
void del_duplication(char *str_cpy, char *no_dupli_str);

int main() 
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t;
    char str[1002];

    scanf("%d", &t);

    while (t--) {
        scanf(" %s", str);
        sort_str(str);
        char_count(str);
        if (t != 0) {
            printf("\n");
        }
    }

    return 0;
}

void sort_str(char *str)
{
    int i, j, len = strlen(str);
    char temp;

    for (i = 0; i < len; i++) {
        for (j = i+1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp; 
            }
        }
    }
}

void char_count(char *str)
{
    char str_cpy[1002], no_dupli_str[1002];
    strcpy(str_cpy, str);
    del_duplication(str_cpy, no_dupli_str);

    int i, j, no_str_len = strlen(no_dupli_str), len = strlen(str), count;

    for (i = 0; i < no_str_len; i++) {
        count = 0;
        for (j = 0; j < len; j++) {
            if (no_dupli_str[i] == str[j]) {
                count++;
            }
        }
        printf("%c = %d\n", no_dupli_str[i], count);
    }
}

void del_duplication(char *str_cpy, char *no_dupli_str)
{
    int i, j, len = strlen(str_cpy);

    for (i = 0; i < len; i++) {
        for (j = i+1; j < len; j++) {
            if (str_cpy[i] == str_cpy[j]) {
                str_cpy[j] = '0';
            }
        }
    }
    for (i = 0, j = 0; i < len; i++) {
        if (str_cpy[i] != '0') {
            no_dupli_str[j] = str_cpy[i];
            j++;
        }
    }
    no_dupli_str[j] = '\0';
}

// Author: Shihab Mahamud
// Date: Saturday, April 03, 2021 | 05:36:56
