#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of square (1-20): ";
    cin >> size;

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {
            // Print '*' only on the border rows/columns
            if (row == 1 || row == size || col == 1 || col == size) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}