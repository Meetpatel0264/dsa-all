#include <iostream>
#include <vector>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNum, string name, double initialBalance) {
        this->accountNumber = accNum;
        this->accountHolder = name;
        this->balance = initialBalance;
    }

    void displayDetails() const {
        cout << "------------------------------" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
        cout << "------------------------------" << endl;
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    vector<BankAccount> accounts;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Bank Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Delete Account\n";
        cout << "4. Search Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int accNum;
                string name;
                double initialBalance;

                cout << "Enter Account Number: ";
                cin >> accNum;
                cin.ignore();  // clear newline from input buffer

                cout << "Enter Account Holder Name: ";
                getline(cin, name);

                cout << "Enter Initial Balance: ";
                cin >> initialBalance;

                accounts.push_back(BankAccount(accNum, name, initialBalance));
                cout << "------------------------------" << endl;
                cout << "Account Created Successfully!" << endl;
                cout << "------------------------------" << endl;
                break;
            }

            case 2: {
                if (accounts.empty()) {
                    cout << "------------------------------" << endl;
                    cout << "No accounts to display." << endl;
                    cout << "------------------------------" << endl;
                } else {
                    for (const auto& account : accounts) {
                        account.displayDetails();
                    }
                }
                break;
            }

            case 3: {
                int accNum;
                cout << "Enter Account Number to Delete: ";
                cin >> accNum;
                bool found = false;

                for (auto it = accounts.begin(); it != accounts.end(); ++it) {
                    if (it->getAccountNumber() == accNum) {
                        accounts.erase(it);
                        found = true;
                        cout << "------------------------------" << endl;
                        cout << "Account Deleted Successfully!" << endl;
                        cout << "------------------------------" << endl;
                        break;
                    }
                }

                if (!found) {
                    cout << "------------------------------" << endl;
                    cout << "Account Not Found!" << endl;
                    cout << "------------------------------" << endl;
                }

                break;
            }

            case 4: {
                int accNum;
                cout << "Enter Account Number to Search: ";
                cin >> accNum;
                bool found = false;

                for (const auto& account : accounts) {
                    if (account.getAccountNumber() == accNum) {
                        account.displayDetails();
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "------------------------------" << endl;
                    cout << "Account Not Found!" << endl;
                    cout << "------------------------------" << endl;
                }

                break;
            }

            case 5: {
                cout << "------------------------------" << endl;
                cout << "Thank you for using our bank system!" << endl;
                cout << "------------------------------" << endl;
                break;
            }

            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 5);

    return 0;
}
