#include <iostream>

using namespace std;

int main(){

    int n , num = 1;
    char ch='A';

    cout << "Enter Any Number : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    // cout << "After Number :" << num;

    return 0;
}