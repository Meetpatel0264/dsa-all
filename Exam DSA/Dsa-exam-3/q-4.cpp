#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s < 6 - i; s++) {
            cout << "* ";
        }

        int binary = (i % 2 == 1) ? 1 : 0;
        for (int j = 1; j <= i; j++) {
            cout << binary << " ";
            binary = 1 - binary; 
        }

        cout << endl;
    }

    return 0;
}
