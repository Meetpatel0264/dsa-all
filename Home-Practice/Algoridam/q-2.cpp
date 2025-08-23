#include <iostream>
#include <vector>

using namespace std;

void insertionSort (vector<int>& arr){

    int size = arr.size();
    
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
    }
    
    
}

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
    
    insertionSort(arr);
    
    cout << "\n-----------------------After-----------------------\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    

    return 0;
}