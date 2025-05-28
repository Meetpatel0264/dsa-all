#include <iostream>
using namespace std;

int main() {
    int n, j = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

        while (n != 0) {
            rem = n % 10;
            j++;
            n = n / 10;
        }

    cout << "Total digits : " << j << endl;

    return 0;
}