#include <iostream>
using namespace std;

int main(void) {
    int num_of_room, peoples_in_room, room_capacity;
    int free_rooms = 0;

    cin >> num_of_room;
    for (int i=0; i<num_of_room; i++) {
        cin >> peoples_in_room >> room_capacity;
        if ((room_capacity - peoples_in_room) >= 2) {
            free_rooms++;
        }
    }

    cout << free_rooms << endl;
    return 0;
}
/* Author: p-nerd */