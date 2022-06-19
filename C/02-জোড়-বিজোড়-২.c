// OJ: dimikoj.com-02 | Date: 17 January, 2021 | Author: Shihab Mahamud

#include <stdio.h>

int main() {
    int t, len;
    char number_str[102];
    int last_digit;

    scanf("%d", &t);

    while (t--) {
        scanf(" %s", number_str);
        
	len = strlen(number_str);
	last_digit = (number_str[len-1]) - '0'; // Chack is Last Digit Even or Odd in the number
	if (last_digit % 2 == 0) {
            printf("even\n");
	}
	else {
            printf("odd\n");
	}
    }
	
    return 0;
}
