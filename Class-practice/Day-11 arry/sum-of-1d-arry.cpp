#include <iostream> 

using namespace std;

int main(){

    int arr1[3] = {};
    int arr2[3] = {};

    for(int i = 0; i < 3; i++){
        cout << "Enter The Value Of Array 1 : ";
        cin >> arr1[i];
    }

    for(int i = 0; i < 3; i++){
        cout << "Enter The Value Of Array 2 : ";
        cin >> arr2[i];
    }

    int sumArr[3] = {};

    for(int i = 0; i < 3; i++){
        sumArr[i] = arr1[i] + arr2[i];
    }

    for(int i = 0; i < 3; i++){
        cout << "Sum OF Element 1 : " << arr1[i] << " And Sum Of Element 2 : " << arr2[i] << " = " << sumArr[i] << endl;

    }

    return 0;
}