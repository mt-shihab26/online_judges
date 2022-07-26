#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int first_banana, initial_dollors, numbers_of_banana;
    int total_dollors = 0;

    scanf("%d %d %d", &first_banana, &initial_dollors, &numbers_of_banana);
    for (int i = 1; i <= numbers_of_banana; i++)
        total_dollors += i*first_banana;

    if (initial_dollors >= total_dollors)
        printf("0\n");
    else
        printf("%d\n", total_dollors-initial_dollors);

    return 0;
}
// Author: Shihab Mahamud
// Date: বুধবার, মার্চ 10, 2021 | 01:08:46
