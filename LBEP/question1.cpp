#include <iostream>
using namespace std;


void displayArrayWithForLoop(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "The element " << i + 1 << " of the array is " << arr[i] << endl;
    }
}


void displayArrayWithWhileLoop(char arr[], int size) {
    int i = 0;
    while (i < size) {
        cout << "The element " << i + 1 << " of the array is " << arr[i] << endl;
        i++;
    }
}


void displayArrayWithDoWhileLoop(char arr[], int size) {
    int i = 0;
    do {
        cout << "The element " << i + 1 << " of the array is " << arr[i] << endl;
        i++;
    } while (i < size);
}


int findPositionOfChar(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int size = sizeof(Array) / sizeof(Array[0]);

    
    cout << "Using for loop:\n";
    displayArrayWithForLoop(Array, size);

    cout << "\nUsing while loop:\n";
    displayArrayWithWhileLoop(Array, size);

    cout << "\nUsing do-while loop:\n";
    displayArrayWithDoWhileLoop(Array, size);


    char target = 'p';
    int position = findPositionOfChar(Array, size, target);
    if (position != -1) {
        cout << "\nPosition of character '" << target << "' is: " << position << endl;
    } else {
        cout << "\nCharacter '" << target << "' not found in array." << endl;
    }

    return 0;
}
