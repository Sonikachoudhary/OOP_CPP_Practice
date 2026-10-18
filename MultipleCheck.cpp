#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two Integers: ";
    cin >> num1 >> num2;

    if (num2 != 0 && num1 % num2 == 0)
        cout << num1 << " is a Multiple of " << num2 << endl;
    else
        cout << num1 << " is not a Multiple of " << num2 << endl;

    return 0;
}
