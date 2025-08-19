#include <iostream>

using namespace std;

class Book {
    protected:
        int bookID;
        string name;
        string author;
        bool isIssued;
    public:
        Book (){
            this->bookID = 0;
            this->name = "";
            this->author = "";
            this->isIssued = false;
        }

        void addBook (int bookID, string name, string author) {
            this->bookID = bookID;
            this->name = name;
            this->author = author;
            this->isIssued = false;
        }

        void viewBookDaitails (){
            cout << "\n--------------------------------------------------\n";
            cout << "BookID : " << this->bookID;
            cout << "Name : " << this->name;
            cout << "Author : " << this->author;
            cout << "Availbility : " << (this->isIssued == true ? "No" : "Yes") << endl;
            cout << "--------------------------------------------------\n\n";
        }

        int getBookID (){
            return this->bookID;
        }
        bool getIsIssued(){
            return this->isIssued;
        }
};

class IssuedBook : public Book {
    private:
        string issuedTo;
        string issuedDate;
    public:
        void issueBook(string issuedTo, string issuedDate) {
            this->issuedTo = issuedTo;
            this->issuedDate = issuedDate;
            this->isIssued = true;
            cout << "\n--------------------------------------------------\n";
            cout << "Book is issued to : " << issuedTo << "On Date : " << issuedDate << endl;
            cout << "--------------------------------------------------\n\n";
        }

        void returnBook (){

        }
};

int main(){
    IssuedBook library[5];
    int choice, idx = 0;

    do{
        cout << "Press 1 For Add A Book" << endl;
        cout << "Press 2 For View All Book Details" << endl;
        cout << "Press 3 For Issue A Book" << endl;
        cout << "Press 4 For Return A Book" << endl;
        cout << "Press 5 For Exit...." << endl;

        cout << "Enter Your choice.." << endl;
        cin >> choice;

        switch (choice){
        case 1:{
            int bookID;
            string name, author;
            
            cout << "Enter Your BookID : " << endl;
            cin >> bookID;

            cin.ignore();

            cout << "Enter Your Name : " << endl;
            getline(cin, name);
            
            cout << "Enter Your Author Name : " << endl;
            getline(cin, name);

            library[idx].addBook(bookID, name, author);
            idx++;
            
                break;
            }
        
        case 2:{
            if(idx == 0){
                cout << "Not a Book availaible at a time" << endl;
                break;
            }

            for(int i = 0; i < idx; i++){
                library[i].viewBookDaitails();
            }
            cout << endl;
            break;
        }
    
        case 3:{
            int bookID;
            bool flag = false;
            
            cout << "Enter the ID of Book you Want to issue : " << endl;
            cin >> bookID;

            cin.ignore();

            for(int i = 0; i < idx; i++){
                int id = library[i].getBookID();
            
                if(id == bookID){
                        flag = true;
                        if(library[i].getIsIssued() == false){
                            string name, date;

                            cout << "Enter the name of borrower : ";
                            getline(cin, name);
                            
                            cout << "Enter the issue date : ";
                            getline(cin, date);
                            
                            library[i].issueBook(name, date);
                            break;
                        } else {
                            cout << "Its Already issued to someone else....." << endl;
                        }
                    }
                }

                if(flag == false){
                    cout << "It's Not Availble.....";
                }
            break;
        }
        case 5:{
            cout << "Thank You Use For Libary.." << endl;
            break;
        }
        default:{
            cout << "Invalide Choice...." << endl;
            break;
        }
    }

    } while (choice != 5);

    return 0;
}