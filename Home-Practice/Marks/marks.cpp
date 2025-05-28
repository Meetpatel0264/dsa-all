#include <iostream>

using namespace std;

int main () {

    int mark;
    cout << "Enter your marks : ";
    cin >> mark;

    if (mark >= 100){
        cout << "Enter Valid Marks\n";
    } else if (mark >= 90 && mark <100){
        cout << "Grade A+\n";
    } else if (mark >= 80 && mark <90){
        cout << "Grade A\n";
    } else if (mark >= 70 && mark <80){
        cout << "Grade B\n";
    } else if (mark >= 60 && mark <70){
        cout << "Grade C\n";
    } else if (mark >= 50 && mark <60){
        cout << "Grade D\n";
    } else if (mark >= 33 && mark <50){
        cout << "Grade E\n";
    } else {
        cout << "Grade F\n";
        cout << "You are Fail";
    }

    return 0;
}