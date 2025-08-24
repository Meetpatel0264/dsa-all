
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++) {
        cout << "Enter value : ";
        cin >> arr[i];
    }

    int Count1 = 0;
    int Count2 = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] % 2 == 0) {
            Count2++;
        }
        else {
            Count1++;
        }
    }

    int odd[Count1];
    int even[Count2];

    int idx1 = 0;
    int idx2 = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] % 2 == 0) {
            even[idx1] = arr[i];
            idx1++;
        }
        else {
            odd[idx2] = arr[i];
            idx2++;
        }
    }

    
    cout << endl;
    
    cout << "Odd numbers are : " << endl;
    
    for(int val : odd) {
        cout << val << " ";
    }


    cout << endl;

    cout << "Even numbers are : " << endl;

    for(int val : even) {
        cout << val << " ";
    }

    return 0;
}