#include <iostream>

using namespace std;

int main() {

    cout << (5 < 10) << endl ; // true
    cout << (5 > 10) << endl ; // false
    cout << (5 == 5) << endl ; // true
    cout << (5 != 5) << endl ; // false
    cout << (5 <= 5) << endl ; // true
    cout << (5 >= 5) << endl ; // true


    cout << ( (3 < 4) || (3 > 4) ) << endl ; // true
    cout << ( (3 < 4) || (3 > 1) ) << endl ; // true
    cout << ( (7 < 4) || (3 > 7) ) << endl ; // false

    return 0;
}