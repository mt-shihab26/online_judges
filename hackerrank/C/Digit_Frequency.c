#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c;
    int arr[10] = {0};

    while (scanf("%c", &c) != EOF) {
        if (c >= '0' && c <= '9') {
            arr[c - '0']++;
        }
    }

    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

    printf("%d", arr[9]);

    return 0;
}
