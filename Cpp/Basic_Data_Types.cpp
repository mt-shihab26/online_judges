#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cin >> i >> l >> c >> f >> d;
    cout << i << endl << l << endl << c << endl;
    printf("%.2f\n%.9lf\n", f, d);
    return 0;
}
