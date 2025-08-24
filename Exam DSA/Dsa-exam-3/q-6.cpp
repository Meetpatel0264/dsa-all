#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            if (j == 3) {
                cout << "@ ";
            } else {
                char ch = 'A' + j - 1;
                cout << ch << " ";
            }
        }
        cout << endl;
    }
}

// A 
// B A
// @ B A 
// D @ B A 
// E D @ B A