#include <iostream>

using namespace std;

int main(){

    // Start Traingle

    // int n;

    // cout << "Enter Any Number :";
    // cin >> n;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // Number Traingle

    // int n;

    // cout << "Enter Any Number :";
    // cin >> n;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << (i + 1) << " ";
    //     }

    //     cout << endl;
    // }

    // Char Traigle

    int n; 
    
    cout << "Enter Any Number :";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < i+1; j++){
            cout << (i + 1) << " ";
        } 

        cout << endl;
    }
}