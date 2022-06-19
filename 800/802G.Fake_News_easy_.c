#include <stdio.h>
#include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

char news[1002];

int main(void) 
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    char str[1001];
	char s[] = "heidi";
	scanf("%s", str);
	int len = strlen(str);
	int cnt = 0;
	for (int i = 0 ; i < len ; i++){
		if (str[i] == s[cnt]){
			cnt++;
		}
	}
	// printf("%s", cnt == 5 ? "YES\n" : "NO\n");
    if (cnt == 5) 
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 30, 2021 | 06:33:38 AM
// Problem Link: https://codeforces.com/problemset/problem/802/G
