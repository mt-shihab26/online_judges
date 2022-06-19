#include <bits/stdc++.h>
using namespace std;

template <typename Tp>
void print(Tp &a) {
    for (auto &ith : a)
        cout << ith << " ";
    cout << '\n';
}

void quick_sort(vector<int> &a, int low, int high) {
    if (low >= high) return;

    int pivot = low;
    for (int i = low; i < high; i++) {
        if (a[i] < a[high]) 
            swap(a[i], a[pivot++]);
    }
    swap(a[pivot], a[high]);

    print(a);

    quick_sort(a, low, pivot-1);
    quick_sort(a, pivot+1, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quick_sort(a, 0, n-1);
}