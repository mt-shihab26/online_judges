// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"

int main(void) {
    int a, b, c;

    cin >> a >> b >> c;

    vector <int> result;
    result.push_back(a+(b*c));
    result.push_back(a*(b+c));
    result.push_back(a*b*c);
    result.push_back((a+b)*c);
    result.push_back(a+b+c);

    cout << *max_element(result.begin(), result.end()) << endn;

    
    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 07:31:54 AM (+06)
