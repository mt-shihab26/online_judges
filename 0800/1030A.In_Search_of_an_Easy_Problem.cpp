#include <iostream>
using namespace std;

int main(void) {
    int n, opinion;
    cin >> n;
    while (n--) {
        cin >> opinion;
        if (opinion == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
/* Author: shihab4t */