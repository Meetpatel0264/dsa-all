#include <iostream>

using namespace std;

int main(){

    int n , counter = 0;

    cout << "Enter Any number : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            counter ++;
        }
    }

    if(counter == 2){
        cout << "Prime No ";
    } else{
        cout << "Non Prime No ";
    }

    return 0;
}