#include<iostream>

using namespace std;

class Book {
    protected:
        int bookID;
        string name;
        string author;
        bool isIssued;
    public:
        Book(){
            this->bookID = 0;
            this->name = "";
            this->author = "";
            this->isIssued = false;
        }

        void addBook(int bookID, string name, string author) {
            this->bookID = bookID;
            this->name = name;
            this->author = author;
            this->isIssued = false;

        }

        void viewBookDetails() {
            cout << "\n----------------------------------------------\n";
            cout << "BookID : " << this->bookID << endl;
            cout << "Name : " << this->name << endl;
            cout << "Author : " << this->author << endl;
            cout << "Available : " << (this->isIssued == true ? "No" : "Yes") << endl;
            cout << "----------------------------------------------\n\n";
        }

        void fineCalcutale (){
            // return 
        }

        int getBookId(){
            return this->bookID;
        }

        bool getIsIssued() {
            return this->isIssued;
        }
};

class IssuedBook : public Book {
    private:
        string issuedTo;
        string issueDate;
        int dueDate, finePerDay;
    public:
        void issueBook(string issuedTo, string issueDate) {
            this->issuedTo = issuedTo;
            this->issueDate = issueDate;
            this->isIssued = true;
            cout << "\n----------------------------------------------\n";
            cout << "Book is issued to : " << issuedTo << " on Date : " << issueDate << endl;
            cout << "----------------------------------------------\n\n";
        }
        void returnBook() {
            
        }
};

int main(){
    IssuedBook l1[5];
    int choice, index = 0;

    do {
        cout << "Enter 1 to Add A Book...." << endl;
        cout << "Enter 2 to View All Book...." << endl;
        cout << "Enter 3 to Issue A Book...." << endl;
        cout << "Enter 4 to Return A Book...." << endl;
        cout << "Enter 5 Fine Calculate" << endl;
        cout << "Enter 6 to Exit...." << endl;
        
        cout << "Enter your choice : ";     
        cin >> choice;

        switch(choice) {
            case 1: {
                int bookID;
                string name, author;

                cout << "Enter a book Id : ";
                cin >> bookID;

                cin.ignore();

                cout << "Enter the name of Book : ";
                getline(cin, name);

                cout << "Enter the name of Author : ";
                getline(cin, author);

                l1[index].addBook(bookID, name, author);
                index++;

                break;
            }
            case 2: {
                if(index == 0){
                    cout << "Book Not A Available...." << endl;
                    break;
                }

                for(int i = 0; i < index; i++){
                    l1[i].viewBookDetails();
                }
                cout << endl;
                break;
            }
            case 3: {
                int bookID;
                bool flag = false;

                cout << "Enter The ID Of Book Choice : ";
                cin >> bookID;

                cin.ignore();

                for(int i = 0; i < index; i++){
                    int id = l1[i].getBookId();

                    if(id == bookID){
                        flag = true;
                        if(l1[i].getIsIssued() == false){
                            string name, date;

                            cout << "Enter The Issue To : ";
                            getline(cin, name);
                            
                            cout << "Enter The Issue Date : ";
                            getline(cin, date);
                            
                            l1[i].issueBook(name, date);

                            break;
                        } else {
                            cout << "It's Already Issued to Someone Else!!!" << endl;
                        }
                    }
                }

                if(flag == false){
                    cout << "It's Not Availble.....";
                }
                break;
            }
            case 4: {
                int bookID;
                bool flag = false;

                cout << "Enter the book ID to return: ";
                cin >> bookID;

                for (int i = 0; i < index; i++) {
                    if (l1[i].getBookId() == bookID) {
                        flag = true;
                        if (l1[i].getIsIssued()) {
                            l1[i].returnBook();
                        } else {
                            cout << "Book is not issued to anyone" << endl;
                        }
                        break;
                    } else {
                        cout << "Book Is Not Issued To Anyone....." << endl;
                    }
                }
                break;
            }
            case 5: {
                
                break;
            }
            case 6: {
                cout << "Thank You For Using.." << endl;
                break;
            }
            default:
                cout << "Invalid Choice...." << endl;
        }
    } while(choice != 5);


    return 0;
}