#include <stdio.h>

int linear_search(int A[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (A[i] == x) return i;
    }
    return -1;
}

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n]; 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    printf("%d\n", linear_search(arr, n, k));
}