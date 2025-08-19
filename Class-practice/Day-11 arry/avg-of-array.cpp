#include <iostream>

using namespace std;

int main(){

    int arr[5] {};

    for(int i = 0; i < 5; i++){
        cout << "Enter The Value : ";
        cin >> arr[i];
    }

    for(int val : arr){
        cout << val << " " ;
    }

    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    cout << endl;
    cout << "Average Of Array : " << float(sum) / 5 << endl;

    return 0;
}