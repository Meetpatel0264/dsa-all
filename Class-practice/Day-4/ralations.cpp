#include <iostream>

using namespace std;

int main(){
    int n = 50 , i = 1;


    cout << (10 < 5) << endl;
    cout << (10 <= 5) << endl;
    cout << (10 > 5) << endl;
    cout << (10 >= 5) << endl;
    cout << (10 == 5) << endl;
    cout << (10 != 5) << endl;

    cout << ((10 < 20) && (10 < 5)) << endl;
    cout << ((10 < 20) || (10 < 5)) << endl;
    cout << !((10 < 20) && (10 < 5)) << endl;
    cout << !((10 < 20) || (10 < 5)) << endl;

    while (i <= n)
    {
        cout << i << " ";
        i++;
    }

    cout << endl ;
    
    cout << (n = i) << endl;
    cout << (n += i) << endl;
    cout << (n -= i) << endl;
    cout << (n *= i) << endl;
    cout << (n /= i) << endl;
    cout << (n %= i) << endl;

    return 0;
}