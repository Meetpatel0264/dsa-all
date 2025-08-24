#include<iostream>
#include<vector>

using namespace std;

class MemoryCalculate {
    private :
        int studentID;
        string studentName;
    public:
        MemoryCalculate(int studentID, string studentName){
            this->studentID = studentID;
            this->studentName = studentName;
        }

        void getStudentDetails(){
            cout << "------------------------------" <<endl;
            cout << "Student Id : " << this->studentID <<endl;
            cout << "Student Name : " << this->studentName <<endl;
            cout << "------------------------------" <<endl;
        }

        int getStudentId(){
            return this->studentID;
        }
    };

int main(){

    vector<MemoryCalculate> s1;
    int choice;

        do{ cout << "\n------------------------------------------------" << endl;
            cout << "------------MemoryCalculate------------" << endl;
            cout << "Press 1. For Add Student to a list" << endl;
            cout << "Press 2. For Display the list of student" << endl;
            cout << "Press 3. For Remove student from the list" << endl;
            cout << "Press 4. For Add search a Student" << endl;
            cout << "Press 5. For Exit" << endl;
            cout << "------------------------------------------------\n\n";

            cout << "Enter your choice : ";
            cin >> choice;

            switch (choice){
                
                case 1 :{
                    int studentID;
                    string studentName;

                    cout << "Enter The StudentID : ";
                    cin >> studentID;

                    cin.ignore();

                    cout << "Enter The Student Name : ";
                    getline(cin, studentName);

                    s1.push_back(MemoryCalculate(studentID,studentName));

                    cout << "------------------------------" <<endl;
                    cout << "Student Added Succesfully" <<endl;
                    cout << "------------------------------" <<endl;
        
                    break;
                }
                case 2 :{
                    for(auto value : s1){
                        value.getStudentDetails();
                    }
                    break;
                }
                case 3 :{
                    int studentID;
                    cout << "Enter StudentId For Delete : ";
                    cin >> studentID;
                    bool flag = false;
                    
                    for (auto i = s1.begin(); i != s1.end(); i++){

                        if (i->getStudentId() == studentID){
                            flag = true;
                            s1.erase(i);

                            cout << "------------------------------"<<endl;
                            cout << "Student Deleted Succesfully..."<<endl;
                            cout << "------------------------------"<<endl;
                            
                            break;
                        }  
                    }
                    if (flag == false){
                        cout << "------------------------------"<<endl;
                        cout << "Student Nothing..."<<endl;
                        cout << "------------------------------"<<endl;
                    }

                    break;
                }
                case 4 :{
                    int studentID;
                    cout << "Enter StudentId For Search : ";
                    cin >> studentID;
                    bool flag=false;
                    for (auto i = s1.begin(); i != s1.end(); i++)
                    {
                        if (i->getStudentId() == studentID){
                            flag = true;
                            i->getStudentDetails();
                            break;
                        }
                       
                    }
                    if (flag == false){
                        cout << "------------------------------"<<endl;
                        cout << "Student Nothing..."<<endl;
                        cout << "------------------------------"<<endl;
                    }

                    break;
                }
                case 5 :{
                    cout << "------------------------------"<<endl;
                    cout << "Thank you For Using This Program." << endl;
                    cout << "------------------------------"<<endl;

                    break;
                }
               
            }
        } while (choice != 5);

    return 0;
}