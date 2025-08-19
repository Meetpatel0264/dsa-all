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
    cout << "Sum Of Array : " << sum << endl;

    return 0;
}