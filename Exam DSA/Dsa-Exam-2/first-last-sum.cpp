#include<iostream>

using namespace std;

int main(){

    int n;
    int firstdigit , lastdigit;

    cout << "Enter N :";
    cin >> n;

    lastdigit = n % 10;

    while (n != 0)
    {
     firstdigit = n % 10;
     n = n/10;
    }

//    do{
//     firstdigit = n % 10;
//     n = n/10;
//    } while(n != 0);


    cout << "first and last digit sum is :" << firstdigit + lastdigit;

    return 0;
}