#include <iostream>
#include <vector>

using namespace std;

int main (){

    int size, count = 0;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element Number : " ;
        cin >> arr[i];
    }
    cout << "------------------  Before  ------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n----------------------------------------------" << endl;
    
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -i -1; j++)
        {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            count++;
        }
    }

    cout << "Swap Count : " << count << endl;
    
    cout << "------------------  After  ------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n----------------------------------------------" << endl;
    
    return 0;   
}