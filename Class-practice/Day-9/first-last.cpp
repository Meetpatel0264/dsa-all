#include <iostream>

using namespace std;

int main(){

    int firstDigit = 0, lastDigit = 0, num ,rem;

    cout << "Enter The Number : " ;
    cin >> num;

    lastDigit = num % 10;

    while(num != 0){
        firstDigit = num % 10;
        num = num / 10;
    }

    cout << "Sum Of First & Last Digit : " << lastDigit + firstDigit;


    return 0;
}