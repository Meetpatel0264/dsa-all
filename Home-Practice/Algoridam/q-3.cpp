#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr);

int main(){

    int size;
    int count = 0;
    
    cout << "Enter The Arr Size : ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element : ";
        cin >> arr[i];
    }

    cout << "\n-----------------------Before-----------------------\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    selectionSort(arr);
    
    cout << "\n-----------------------After-----------------------\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    

    return 0;
}

void selectionSort(vector<int>& arr){
     int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}