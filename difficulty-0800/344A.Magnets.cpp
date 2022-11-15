#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int count = 0, magnet, temp = 0;
    while (n--) {
        cin >> magnet;
        if (magnet != temp) {
            temp = magnet;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
/* Author: shh26b */