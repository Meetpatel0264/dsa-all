#include <iostream>

using namespace std;

int main () {

    char ch;
    cout << "Enter your char : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "lovercase";
    } else {
        cout << "Upercase";
    }
    

    return 0;
}