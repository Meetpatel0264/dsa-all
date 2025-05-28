#include <iostream>

using namespace std;

int main() {

    int a=10;

    // int b = a++;
    // cout << "a = " << a << endl ;  //11
    // cout << "b = " << b << endl ;  //10

    int b = ++a;
    cout << "a = " << a << endl ;   //11
    cout << "b = " << b << endl ;   //11


    return 0;
}