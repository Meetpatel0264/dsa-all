#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance = 0;
    string accountHolderName;

public:
    BankAccount(){
        this->accountNumber = 0;
        this->balance = 0;
        this->accountHolderName = "";
    }

    void createAccount(int accountNumber, string name) {
        this->accountNumber = accountNumber;
        this->accountHolderName = name;
        cout << "Account Created Successfully\n";
    }

    virtual void displayAccountInfo() const {
        cout << "\n-----------------------------------\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Account Balance : " << balance << endl;
        cout << "Account Type : " << getAccountType() << endl;
        cout << "-----------------------------------\n";
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\n";
        } else {
            cout << "Insufficient Balance\n";
        }
    }

    virtual double calculateInterest(double) const {
        return 0;
    }

    int getAccNumber() const {
        return accountNumber;
    }

    virtual string getAccountType() const {
        return "General";
    }
};

// --- Derived Classes ---

class SavingAccount : public BankAccount {
public:
    string getAccountType() const override {
        return "Saving";
    }

    double calculateInterest(double rate) const override {
        return (balance * rate) / 100;
    }
};

class CurrentAccount : public BankAccount {
public:
    string getAccountType() const override {
        return "Current";
    }

    double calculateInterest(double) const override {
        return 0;
    }
};

class FixedDepositAccount : public BankAccount {
public:
    string getAccountType() const override {
        return "Fixed Deposit";
    }

    void withdraw(double) override {
        cout << "Withdrawals not allowed from Fixed Deposit Account\n";
    }

    double calculateInterest(double rate) const override {
        return (balance * rate) / 100;
    }
};

// --- Main Program ---

int main() {
    vector<BankAccount*> accounts;
    int choice;

    do {
        cout << "\n---- BANK MENU ----\n";
        cout << "1. Create Saving Account\n";
        cout << "2. Create Current Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Show All Account Details\n";
        cout << "5. Deposit Money\n";
        cout << "6. Withdraw Money\n";
        cout << "7. Calculate Interest\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        case 2:
        case 3: {
            int accNo;
            string name;
            cout << "Enter Account Number: ";
            cin >> accNo;

            bool exists = false;
            for (auto* acc : accounts) {
                if (acc->getAccNumber() == accNo) {
                    exists = true;
                    break;
                }
            }

            if (exists) {
                cout << "Account with this number already exists!\n";
                break;
            }

            cout << "Enter Account Holder Name: ";
            cin.ignore();
            getline(cin, name);

            BankAccount* acc = nullptr;
            if (choice == 1) acc = new SavingAccount();
            else if (choice == 2) acc = new CurrentAccount();
            else if (choice == 3) acc = new FixedDepositAccount();

            acc->createAccount(accNo, name);
            accounts.push_back(acc);
            break;
        }

        case 4:
            if (accounts.empty()) {
                cout << "No accounts found.\n";
            } else {
                for (const auto* acc : accounts) {
                    acc->displayAccountInfo();
                }
            }
            break;

        case 5: {
            int accNo;
            double amount;
            cout << "Enter Account Number for Deposit: ";
            cin >> accNo;
            cout << "Enter Amount: ";
            cin >> amount;

            bool found = false;
            for (auto* acc : accounts) {
                if (acc->getAccNumber() == accNo) {
                    acc->deposit(amount);
                    found = true;
                    break;
                }
            }

            if (!found) cout << "Account not found.\n";
            break;
        }

        case 6: {
            int accNo;
            double amount;
            cout << "Enter Account Number for Withdrawal: ";
            cin >> accNo;
            cout << "Enter Amount: ";
            cin >> amount;

            bool found = false;
            for (auto* acc : accounts) {
                if (acc->getAccNumber() == accNo) {
                    acc->withdraw(amount);
                    found = true;
                    break;
                }
            }

            if (!found) cout << "Account not found.\n";
            break;
        }

        case 7: {
            for (const auto* acc : accounts) {
                string type = acc->getAccountType();
                double rate = 0;
                if (type == "Saving") rate = 3.5;
                else if (type == "Fixed Deposit") rate = 5.0;
                else continue;

                double interest = acc->calculateInterest(rate);
                cout << "Interest for " << type << " Account [" << acc->getAccNumber() << "]: " << interest << endl;
            }
            break;
        }

        case 8:
            cout << "Thank you for using our bank.\n";
            for (auto* acc : accounts) {
                delete acc;
            }
            accounts.clear();
            return 0;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (true);

    return 0;
}
