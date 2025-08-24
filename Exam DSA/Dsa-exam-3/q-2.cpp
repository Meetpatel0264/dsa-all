#include <iostream>
using namespace std;

int main() {
    int rows = 5;    
    int num = 25;

    for(int i = 1; i <= 5; i++){
        if(i % 2 == 1){
            for(int j = 1; j <= i; j++){
                cout << num << " ";
                num++;
            }
        }
        else{
            for(int j = 1; j <= i; j++){
                cout << "* ";
                num++;
            }
        }
        cout << endl;
    }

    return 0;
}
