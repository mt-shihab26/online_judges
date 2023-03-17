#include<stdio.h>
#include<math.h>

int main()
{
    int N, i, sum;

    scanf("%d", &N);

    if( N == 0 ){
        printf("%d\n",N+1);
        return 0;
    }

    for(i=fabs(N), sum = 0; i>=1; i--) sum += i;

    if(N<0) sum = -(sum-1);

    printf("%d\n",sum);


    return 0;
}