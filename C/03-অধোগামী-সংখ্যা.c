// OJ: dimikoj.com-03 | Date: 18 January, 2021 | Author: Shihab Mahamud

#include <stdio.h>

int main() {
    int i = 1000, j;
	while (i > 0) {
		j = 5;
		while (j > 0) {
			printf("%d\t", i);
			i -= 1;
			j -= 1;
		}
		printf("\n");
	}	

    return 0;
}
