#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endn;
}

void insertion_sort(int arr[], int n) {
    int i, j, tmp;
    for (i = 0; i < n; i++) {
        tmp = arr[i];
        for (j = i-1; j >= 0; j--) {
            if (arr[j] > tmp) {
                arr[j+1] = arr[j];
                print_arr(arr, n);
            }
            else {
                break;
            }
        }
        arr[j+1] = tmp;
    }
    print_arr(arr, n);
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
// Saturday, September 04, 2021 | 04:04:05 AM (+06)
