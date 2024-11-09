#include <iostream>
#include <string>
using namespace std;


struct ClassRoom {
    string roomName;
    int roomNo;
};


void displayClassRooms(ClassRoom classRooms[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Room name: " << classRooms[i].roomName << endl;
        cout << "Room no: " << classRooms[i].roomNo << endl;
    }
}

int main() {
    
    ClassRoom classRooms[10];
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter information for classroom " << i + 1 << ":\n";
        cout << "Room name: ";
        cin >> classRooms[i].roomName;
        cout << "Room no: ";
        cin >> classRooms[i].roomNo;
    }

   
    cout << "\nClassroom information:\n";
    displayClassRooms(classRooms, 10);

    return 0;
}
