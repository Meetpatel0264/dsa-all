#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }

        for(int s = 4; s >= i; s--){
            cout << "    ";
        }

        for(int m = 5; m >= 6 - i; m--){
            cout << m << " ";
        }
        cout << endl;
    }

    return 0;
}
