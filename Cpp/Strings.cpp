#include <iostream>
#include <string>
using namespace std;

#define endn "\n"

int main() {
	string first, second;
    cin >> first >> second;
    
    cout << first.size() << " " << second.size() << endn;
    cout << first+second << endn;
    
    char ch;
    ch = first[0];
    first[0] = second[0];
    second[0] = ch;
    
    cout << first << " " << second << endn;
    
    return 0;
}
