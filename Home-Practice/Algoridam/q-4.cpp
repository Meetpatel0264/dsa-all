#include <iostream>
#include <vector>

using namespace std;

void print (vector<int>&);
void quickSort (vector<int> &, int, int);
int partation (vector<int> &, int, int);


int main (){
    
    int size;
    
    cout << "Enter The Size Of array : ";
    cin >> size;
    
    vector<int> arr(size, 0);
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Your Value : ";
        cin >> arr[i];
    }
    
    cout << "\n----------------------------- Before -----------------------------------\n";
    print(arr);
    cout << "\n------------------------------------------------------------------------\n";
    
    quickSort(arr, 0, size - 1 );
    
    cout << "\n----------------------------- After ------------------------------------\n";
    print(arr);
    cout << "\n------------------------------------------------------------------------\n";
    
    
    return 0;
}


void print (vector<int>& arr){
    for (int val : arr)
    {
        cout << val << " ";
    }
    
}
void quickSort (vector<int>& arr, int low, int high){
    if (low >= high)
    {
        return;
    }

    int idx = partation(arr, low, high);

    quickSort(arr, low, idx - 1);
    quickSort(arr, idx + 1, high);
}

int partation (vector<int>& arr, int low, int high){

    int pivot = arr[low];
    int count = 0;

    for (int i = low + 1; i <= high; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    int pivotIDX = low + count;

    int temp = arr[pivotIDX];
    arr[pivotIDX] = arr[low];
    arr[low] = temp;

    int left = low;
    int right = high;

    while (left < pivotIDX && right > pivotIDX)
    {
        while (arr[left] < arr[pivotIDX])
        {
            left++;
        }

        while (arr[right] > arr[pivotIDX])
        {
            right--;
        }

        if (left < pivotIDX && right > pivotIDX)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
        
        
    }

    return pivotIDX;
    

    
}