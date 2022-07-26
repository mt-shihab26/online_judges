#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

int main(void) {
    int n, total;
    cin >> n;
    bool petya, vasya, tonya;
    int count = 0;
    while (n--) {
        cin >> petya >> vasya >> tonya;
        total = petya + vasya + tonya;
        if (total >= 2) count++;
    }
    cout << count << endn;
    
    return 0;
}