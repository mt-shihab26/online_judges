#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"
// Functions
// print vector all element in one line
template <typename T> inline void print_vector(vector<T> &vac) {
for (int ele : vac) cout << ele << " "; cout << endn; }


// Solve
void test(void) {
    for(int i=1;i<=100;i++){
        if((i%3 == 0) && (i%5==0))
            cout<<"FizzBuzz\n";
        else if(i%3 == 0)
            cout<<"Fizz\n";
        else if(i%5 == 0)
            cout<<"Buzz\n";
        else
            cout<<i<<"\n";
    }
}

int main(void) {
    test();
    return 0;
}
// shihab4t
// Date: Monday, June 07, 2021 | 10:14:31 PM (+06)
