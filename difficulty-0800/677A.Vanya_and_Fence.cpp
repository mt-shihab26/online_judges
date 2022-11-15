#include <iostream>
using namespace std;

int main(void) {
    int num_of_person, height, sum = 0;
    cin >> num_of_person >> height;
    int persons[num_of_person];
    for (int i=0; i<num_of_person; i++) {
        cin >> persons[i];
        if (persons[i] > height) {
            sum += 2;
        }
        else {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
/* Author: shh26b */