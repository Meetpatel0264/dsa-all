#include<iostream>
#include<vector>

using namespace std;

class Memorycalculate {
    private :
    int id;
    string name;
    public:
    Memorycalculate(int id,string name){
        this->id = id;
        this->name = name;
    }
    void GetStudentDetails(){
        cout << "------------------------------"<<endl;
        cout << "Student Id Is : "<<this->id<<endl;
        cout << "Student Name Is : "<<this->name<<endl;
        cout << "------------------------------"<<endl;
    }
    int GetId(){
        return this->id;
    }
};

int main(){

    vector<Memorycalculate>student;
    int choice;

        do
        {
            cout << "Enter 1 to Add Student to a list :" <<endl;
            cout << "Enter 2 to Display the list of student :" <<endl;
            cout << "Enter 3 to remove student from the list :" <<endl;
            cout << "Enter 4 to Add search a Student :" <<endl;
            cout << "Enter 0 to exit :" <<endl;
            cin >> choice;
            switch (choice)
            {
                case 1 :{
                    int id;
                    string name;

                    cout << "Enter your id : ";
                    cin >> id;

                    cin.ignore();

                    cout << "Enter your name :";
                    getline(cin , name);

                    student.push_back(Memorycalculate(id,name));
        
                    cout << "------------------------------"<<endl;
                    cout << "Student Added Succesfully"<<endl;
                    cout << "------------------------------"<<endl;
                    break;
                }
                case 2 :{
                    for(auto val : student){
                        val.GetStudentDetails();
                    }
                    break;
                    break;
                }
                case 3 :{
                    int id;
                cout << "Enter Id For Delete : ";
                 cin >> id;
                bool isFound=false;
                
            for (auto i = student.begin(); i != student.end(); i++)
            {
                if (i->GetId() == id)
                {
                    isFound = true;
                    student.erase(i);
                    cout << "------------------------------"<<endl;
                    cout << "Student Deleted Succesfully..."<<endl;
                    cout << "------------------------------"<<endl;
                    break;
                }  
            }
                 if (isFound == false)
                 {   cout << "------------------------------"<<endl;
                     cout << "Student Is Not Found..."<<endl;
                     cout << "------------------------------"<<endl;
                 }
                    break;
                }
                case 4 :{
                    int id;
                    cout << "Enter Id For Search : ";
                    cin >> id;
                    bool isFound=false;
                    for (auto i = student.begin(); i != student.end(); i++)
                    {
                        if (i->GetId() == id)
                        {
                            isFound = true;
                            i->GetStudentDetails();
                            break;
                        }
                       
                    }
                    if (isFound == false)
                    {   cout << "------------------------------"<<endl;
                        cout << "Student Is Not Found..."<<endl;
                        cout << "------------------------------"<<endl;
                    }
                    break;
                }
                case 0 :{
                    cout << "------------------------------"<<endl;
                    cout << "Thank you visit again " << endl;
                    cout << "------------------------------"<<endl;
                    break;
                }
                default :{
                    cout << "------------------------------"<<endl;
                    cout << "Invalide Choice " << endl;
                    cout << "------------------------------"<<endl;
                    break;
                }
            }
        } while (choice != 0);
    return 0;
}