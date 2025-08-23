#include <iostream>
#include <vector>

using namespace std;

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
    
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -i -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            count++;
        }
        
    }
    
    
    cout << "\n-----------------------After-----------------------\n";
    
    cout << "Count : " <<count << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    

    return 0;
}