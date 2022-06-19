// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

//Solve
void test_case(void) {
    llint num;
    cin >>num;
    if (num % 2) {
        cout <<"Impossible\n";
    }
    else {
        llint m = 3;
        llint n;
        while (m < num) {
            if (num % m == 0) {
                llint temp = num / m;
                if (temp % 2 == 0) {
                    n  = temp;
                    break;
                }
            }
            m += 2;
        }
        cout <<m <<" " <<n <<endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >>t;
    for (int i = 1; i <= t; i++) {
        cout <<"Case " <<i <<": ";
        test_case();
    }

    return 0;
}
// Solved By: shihab4t
// Friday, July 09, 2021 | 10:36:19 PM (+06)
