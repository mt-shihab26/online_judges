#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 10000

int main() 
{
    char ch, str[MAX_LEN], sen[MAX_LEN];
    scanf("%c\n%s\n%[^\n]s", &ch, str, sen);
    printf("%c\n%s\n%s", ch, str, sen);

    return 0;
}