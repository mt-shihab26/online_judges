#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    int len = strlen(s);

    printf("%c", s[0]);

    for (int i = 1; i < len; i++) {
        if (s[i] == ' ' && s[i-1] != ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}