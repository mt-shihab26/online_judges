#include <stdio.h>

int main(void) {
    int x, i;

    scanf("%d", &x);

    for (i = 1; ; i++) {
        if (x - 5 >= 0)
            x = x - 5;
        else if (x - 4 >= 0) 
            x = x - 4;
        else if (x - 3 >= 0)
            x = x - 3;
        else if (x - 2 >= 0)
            x = x - 2;
        else if (x - 1 >= 0)
            x = x - 1;
        if (x == 0) break;
    }

    printf("%d\n", i);

    return 0;
}