#include <iostream>

using namespace std;

int main() {

    int age;
    cout << "enter your age :";
    cin >> age;

    if (age >= 18){
        cout << "you eligable" << endl; 
    } else{
        cout << "your not eligable" << endl;
    }
    

    return 0;
}