// OJ: dimikoj.com-01 | Date: 17 January, 2021 | Author: Shihab Mahamud

#include <stdio.h>

int main() {
    int t, number;

    scanf("%d", &t);
    while (t--) {
        scanf(" %d", &number);
	if (number % 2 == 0) {
            printf("even\n");
	}
	else {
	    printf("odd\n");
	}
    }

    return 0;
}
