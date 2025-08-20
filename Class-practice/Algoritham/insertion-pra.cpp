#include <iostream> 
#include <vector>

using namespace std;

void insertionSort(vector<int>&arr, int &count){
    int size = arr.size();
    
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int j = i -1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = key;
    }
    

}

int main(){
    
    int size;
    int count = 0;
    
    cout << "Enter The size of arr : ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element : ";
        cin >> arr[i];
    }

    cout << "------------------  Before  ------------------" << endl;

    cout << count << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n----------------------------------------------" << endl;
    
    insertionSort(arr, count);
    
    cout << "------------------  after  ------------------" << endl;
    cout << count << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n----------------------------------------------" << endl;

    return 0;
}