#include <iostream>

using namespace std;

int main() {

    int a , b, c;

    cout << "Enter first Number : ";
    cin >> a;
    cout << "Enter second Number : ";
    cin >> b;
    cout << "Enter third Number : ";
    cin >> c;

    if ((a == b) && (b == c)){
        cout << "All Number Are Same...";
    }
    else if((a == b) && (a > c)){
        cout << "A And B Are Both Same And Bigger Than C";
    }
    else if((b == c) && (b > a)){
        cout << "B And C Are Both Same And Bigger Than A";
    }
    else if((c == a) && (c > b)){
        cout << "A And B Are Both Same And Bigger Than B";
    }   else if(a > b){
             if(a > c){
                 cout << "Its Biggest Number A";
             } else {
                 cout << "Its Biggest Number C";
             }
        } else if (b > c) {
            cout << "Its Biggest Number B";
        } else {
            cout << "Its Biggest Number C";
        }



    return 0;
}