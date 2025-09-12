#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int key);
void printArray(vector<int>& arr);

int main() {
    int size;
    cout << "Enter the length of the array : ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++) {
        cout << "Enter any value : ";
        cin >> arr[i];
    }

    cout << "----------------Array----------------\n";
    printArray(arr);
    cout << endl;

    int key;
    cout << "Enter the value to search : ";
    cin >> key;

    int index = linearSearch(arr, key);

    if (index != -1) {
        cout << "Element found at index : " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

void printArray(vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
}

int linearSearch(vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
