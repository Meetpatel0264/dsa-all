#include <iostream> 

using namespace std;

int main(){

    int start, end;
    int idx = 0;
    int years[100];

    cout << "Enter The Starting Year And Ending Year : ";
    cin >> start >> end;

    for(int i = start; i <= end; i++){
        if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
            years[idx] = i;
            idx++;
        }

    }
    for(int i = 0; i < idx; i++){
        cout << years[i] << " ";
    }

    return 0;
}