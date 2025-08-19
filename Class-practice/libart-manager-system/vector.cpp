#include<iostream>
#include<vector>

using namespace std;

class Student {
private:
    int id;
    string name;

public:
    Student(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void getStudentDetails() {
        cout << "------------------------------" << endl;
        cout << "Student Id Is : " << this->id << endl;
        cout << "Student Name Is : " << this->name << endl;
        cout << "------------------------------" << endl;
    }

    int getId() {
        return this->id;
    }
};

int main() {

    vector<Student> students;
    int choice;

    do {
        cout << " Enter 1 to Add Student : " << endl;
        cout << " Enter 2 to see student details : " << endl;
        cout << " Enter 3 to Remove student  : " << endl;
        cout << " Enter 4 to Search student : " << endl;
        cout << " Enter 5 to Exit : " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string name;

                cout << "Enter your id: ";
                cin >> id;

                cin.ignore();

                cout << "Enter your name: ";
                getline(cin, name);

                students.push_back(Student(id, name));

                cout << "------------------------------" << endl;
                cout << "Student Added Successfully" << endl;
                cout << "------------------------------" << endl;
                break;
            }

            case 2: {
                if (students.empty()) {
                    cout << "------------------------------" << endl;
                    cout << "No students to display." << endl;
                    cout << "------------------------------" << endl;
                } else {
                    for (auto& value : students) {
                        value.getStudentDetails();
                    }
                }
                break;
            }

            case 3: {
                int id;
                cout << "Enter Id to Delete: ";
                cin >> id;
                bool isFound = false;

                for (auto i = students.begin(); i != students.end(); i++) {
                    if (i->getId() == id) {
                        isFound = true;
                        students.erase(i);
                        cout << "------------------------------" << endl;
                        cout << "Student Deleted Successfully..." << endl;
                        cout << "------------------------------" << endl;
                        break;
                    }
                }

                if (!isFound) {
                    cout << "------------------------------" << endl;
                    cout << "Student not found..." << endl;
                    cout << "------------------------------" << endl;
                }
                break;
            }

            case 4: {
                int id;
                cout << "Enter Id to Search: ";
                cin >> id;
                bool isFound = false;

                for (auto& i : students) {
                    if (i.getId() == id) {
                        isFound = true;
                        i.getStudentDetails();
                        break;
                    }
                }

                if (!isFound) {
                    cout << "------------------------------" << endl;
                    cout << "Student not found..." << endl;
                    cout << "------------------------------" << endl;
                }
                break;
            }

            case 5: {
                cout << "------------------------------" << endl;
                cout << "Thank you, visit again." << endl;
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
