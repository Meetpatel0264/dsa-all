#include <iostream>

using namespace std;

int main(){

    int sum = 0, num ,rem;

    cout << "Enter The Number : " ;
    cin >> num;

    while(num != 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    cout << "All Digit Sum : " << sum;

    return 0;
}