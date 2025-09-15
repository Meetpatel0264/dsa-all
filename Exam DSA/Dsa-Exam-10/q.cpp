#include <iostream>
#include <vector>
using namespace std;

class Sort {
public:
    void printArray(vector<int>& arr) {
        cout << "\n------------------------------------" << endl;
        for (int val : arr) {
            cout << val << " ";
        }
        cout << "\n------------------------------------" << endl;
    }

    void insertionSort(vector<int>& arr) {
    
    for (int i = 0; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i -1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
    }
   
void margeSort(vector<int>& arr, int start, int end){

    if (start >= end)
    {
        return ;
    }
    
    int mid = (start + end) / 2;

    margeSort(arr, start, mid);
    margeSort(arr, mid +1, end);
    marge(arr, start, mid, end);

}

void marge(vector<int> & arr, int start, int mid, int end){

    int left = start;
    int right = mid+1;
    vector<int> temp;

    while (left <= mid && right <= end)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right++;
        }
        
    }
    
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= end)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
    
}

int binarySearch(vector<int>& arr, int low, int high, int key) {
        if (low > high)
        {
            return -1;
        }

        int mid = (low + high) / 2;

        if (key == arr[mid])
        {
            return mid;
        } else if (arr[mid] > key)
        {
            return binarySearch(arr, low, mid - 1, key);
        } else{
            return binarySearch(arr, mid + 1, high, key);
        }
    }
};

int main() {
    Sort s1;
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size, 0);
    for (int i = 0; i < size; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\n---------------- MENU ----------------" << endl;
        cout << "Press 1. For Insertion Sort" << endl;
        cout << "Press 2. For Merge Sort" << endl;
        cout << "Press 3. For Binary Search" << endl;
        cout << "Press 0. For Exit" << endl;

        cout << "Enter The choice: ";
        cin >> choice;

        switch (choice) {
        case 1:{
            s1.insertionSort(arr);
            s1.printArray(arr);
            break;
        }

        case 2:{
            s1.margeSort(arr, 0, size - 1);
            s1.printArray(arr);
            break;
        }

        case 3: {
            s1.insertionSort(arr);

            int key;

            cout << "Enter element to search: ";
            cin >> key;

            int idx = s1.binarySearch(arr, 0, size - 1, key);

            if (idx == -1)
            {
                cout << "Element not found.\n";
            } else{
                cout << "Element found at index " << idx << endl;
            }
            
            break;
        }
        case 0:{
            cout << "Thank You Using This Program............" << endl;
            break;
        }
        
        default:{
            cout << "Invalid choice!\n";
        }
        
        }
    } while (choice != 0);

    return 0;
}