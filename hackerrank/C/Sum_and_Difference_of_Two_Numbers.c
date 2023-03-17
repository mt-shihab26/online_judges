#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    double c, d;
    scanf("%d %d %lf %lf", &a, &b, &c, &d);
    printf("%d %d\n%.1lf %.1lf\n", a+b, a-b, c+d, c-d);
    
    return 0;
}