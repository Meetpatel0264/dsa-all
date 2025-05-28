#include <iostream>

using namespace std;

int main() {

    int age;

    cout << "Enter Your Age :";
    cin >> age;

    if (age >= 18) {
        cout << "Are You 18+";
    } else {
        cout << "Are You Underage";
    }

    return 0;
}