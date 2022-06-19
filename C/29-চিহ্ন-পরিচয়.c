#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
	int t;
	char ch;

	scanf("%d", &t);

	while (t--) {
		scanf(" %c", &ch);
		if (ch >= 'A' && ch <= 'Z') printf("Uppercase Character\n");
		else if (ch >= 'a' && ch <= 'z') printf("Lowercase Character\n");
		else if (ch >= '0' && ch <= '9') printf("Numerical Digit\n");
		else printf("Special Character\n");
	}

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 07:13:53 AM
// Problem Link: 
