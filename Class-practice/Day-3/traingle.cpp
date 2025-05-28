#include <iostream>

using namespace std;

int main() {

    int area, base, height;

    cout << "Enter your base :";
    cin >> base;

    cout << "Enter your Height :";
    cin >> height;
    area = 0.5 * base * height;

    cout << "Your Traingle Area :" << area << endl;

    return 0;
}