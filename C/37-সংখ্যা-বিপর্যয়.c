#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{

	// freopen("input.txt", "rt", stdin);
	// freopen("output.txt", "wt", stdout);

	int t, last_digit;
	long num, reversed_num;

	scanf("%d", &t);
	while (t--)
	{
		scanf(" %ld", &num);
		reversed_num = 0;
		while (num > 0)
		{
			last_digit = num % 10;
			num /= 10;
			reversed_num = (reversed_num * 10) + last_digit;
		}
		printf("%ld\n", reversed_num);
	}

	return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 07:38:06 AM
// Problem Link: https://dimikoj.com/problems/36/number-disaster-by
