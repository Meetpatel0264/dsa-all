#include <iostream>

using namespace std;

void calc (int a, int b);

int main(){

    int a, b;

    cout << "Enter The A and B value : ";
    cin >> a >> b;

    calc(a, b);
    
    return 0;
}

void calc (int a, int b){

    int choice;

    do{
        cout << "Press 1 For + " << endl;
        cout << "Press 2 For - " << endl;
        cout << "Press 3 For * " << endl;
        cout << "Press 4 For / " << endl;
        cout << "Press 5 For % " << endl;
        cout << "Press 6 for Parendrop" << endl;
        cout << "Press 0 to Exit this Program " << endl << endl;

        cout << "Enter Your Choice" << endl;
        cin >> choice;
    
        switch (choice)
        {
        case 1:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a + b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 2:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a - b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 3:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a * b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 4:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << float(a) / float(b) << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 5:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a % b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 6:{
            cout << "------------------------------------------------" << endl;
            cout << "Parandrop Number " << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 0:{
            cout << "------------------------------------------------" << endl;
            cout << "Thank You for using calculater " << endl ;
            cout << "------------------------------------------------" << endl;
        }
        break;
        
        default:{
            cout << "------------------------------------------------" << endl;
            cout << "Please Enter Valid Choice for 1 to 6" << endl;
            cout << "------------------------------------------------" << endl;
        }
            break;
        }

    } while (choice != 0);

    

}