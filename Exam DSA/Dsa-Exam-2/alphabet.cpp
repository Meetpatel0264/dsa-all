#include<iostream>

using namespace std;

int main(){
    char i = 'a', j = 'z';

    do{
        cout << i << " ";
        i = i + 4;
    } while(i <= j);
    
    return 0;
}