#include <iostream>

using namespace std;

int main(){

    int i, num;

    cout << "Enter The Number : " ;
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num << " x " << i << " : " << num*i << endl;
    }

    return 0;
}