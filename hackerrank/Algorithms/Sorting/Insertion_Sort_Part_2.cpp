#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endn;
}

void insertion_sort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        for (j = i-1; j >= 0; j--) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
            else {
                break;
            }
        }
        print_arr(arr, n);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
}
// Solved By: shihab4t
// Saturday, September 04, 2021 | 04:24:58 AM (+06)
