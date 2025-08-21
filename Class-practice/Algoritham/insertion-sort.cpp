#include <iostream>
#include <vector>

using namespace std;

int main(){

    int size;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element : ";
        cin >> arr[i];
    }

    cout << "----------------- Before -----------------" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n------------------------------------------" << endl;
    cout << endl;
    
    for (int i = 1; i < size; i++)
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
    
    

    cout << "----------------- After -----------------" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        
    }
    
    cout << "\n------------------------------------------" << endl;
    
    return 0;
}