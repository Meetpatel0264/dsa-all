#include <iostream>

using namespace std;

int main(){
    int n, num = 1;

    cout << "Enter Any Value : ";
    cin >> n;

    
    // for(int i = 1; i <= n; i++){
    //     char ch = 'A';
    //     for(int j = 1; j < i+1; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << j;
    //         j++;
    //     }

    //     cout << endl;
    // }

    char ch = 'A';

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cout << ch << " ";
            ch++;
        }

        cout << endl ;
    }


    return 0;
}