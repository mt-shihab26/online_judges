#include <stdio.h>
#include <string.h>
#include <math.h>

int check_condition(char statement[]) {
    if (statement[0] == 'X') {
        if (statement[1] == '+' && statement[2] == '+') 
            return 1;
        else 
            return -1;
    }
    else {
        if (statement[0] == '+' && statement[1] == '+') 
            return 1;
        else 
            return -1;
    }
}

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int n, i, x = 0;
    scanf("%d", &n);
    char statement[n][5];
    for (i = 0; i < n; i++) {
        scanf(" %s", statement[i]);
        x += check_condition(statement[i]);
    }
    printf("%d\n", x);

    return 0;
}
// Author: Shihab Mahamud
// Date: Fri 12 Feb 2021 12:53:51 AM +06
