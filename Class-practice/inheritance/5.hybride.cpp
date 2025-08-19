#include <iostream>

using namespace std;

class Person{
    public: 
        string name;
        int age;
};

class Student : public Person{
    public:
        void study(){
            cout << "Full Stack Development" << endl;
        }
        void year(){
            cout << 1.5 << "years" << endl;
        }
};

class Employee : public Person{
    public:
        void salary(){
            cout << 10 << "Lakh" << endl;
        }
        void timing(){
            cout << "9 AM to 3 PM" << endl;
        }    
};

class PartTimePerson : public Student, public Employee{

};

int main(){

    Student p1;
    Employee e1;

    p1.name = "Meet Patel";
    p1.age = 22;

    cout << p1.name << endl;
    cout << p1.age << endl;

    p1.study();
    p1.year();
    e1.salary();
    e1.timing();

    return 0;
}