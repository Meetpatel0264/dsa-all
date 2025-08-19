#include <iostream>

using namespace std;

class BankAccount {
    protected:
        int accountNumber;
        float balance;
        string accountHolderName;

    public:
        BankAccount(){
            this->accountNumber = 0;
            this->balance = 0;
            this->accountHolderName = "";
            cout << "Account Created Successfully" << endl;
        }

        void creatAccount (int accountNumber, string accountHolderName){
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;

            cout << "Account Created Successfully" << endl;
        }

};

class SavingsAccount {};
class ChekingAccount {};
class FixedDepositAccount {};

int main(){
    BankAccount b1[5];
    int choice, idx = 0;

    do{
        cout << "1. Create Saving Account" << endl;
        cout << "2. Create Current Account" << endl;
        cout << "3. Show All Account Details" << endl;
        cout << "4. Create Fixed Deposit Account" << endl;
        cout << "5. Deposit Money" << endl;
        cout << "6. Withdraw Money" << endl;
        cout << "7. Calculate Interest" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;    

        switch (choice){
        case 1:{
             int accountNumber;
            string accountHolderName;

            cout << "Enter The Account Number: ";
            cin >> accountNumber;

            cin.ignore();

            cout << "Enter the name of Account Holder Name : ";
            getline(cin, accountHolderName);

            b1[idx].creatAccount(accountNumber, accountHolderName);
            idx++;

            break;
        }              
        case 2:{
             int accountNumber;
            string accountHolderName;

            cout << "Enter The Account Number: ";
            cin >> accountNumber;

            cin.ignore();

            cout << "Enter the name of Account Holder Name : ";
            getline(cin, accountHolderName);

            b1[idx].creatAccount(accountNumber, accountHolderName);
            idx++;

            break;
        }              
        case 3:{

            break;
        }        
        case 4:{

            break;
        }        
        case 5:{

            break;
        }        
        case 6:{

            break;
        }        
        case 7:{

            break;
        }        
        case 8:{

            break;
        }        
        default:{
            cout << "Invalide Choice...." << endl;
            break;
        }        
        
    }
    } while (choice != 8);
    

    return 0;
}