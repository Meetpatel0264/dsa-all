#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // Do Loop Vartical

    do{
        cout << i << endl ;
        i++;
    } while (i <= 5);
    
    cout << i << endl ;


    // Do Loop Horizontal

    do{
        cout << i << " " ;
        i++;
    } while (i <= 5);
    
    cout << i ;
    

    return 0;
}