#include <iostream>

using namespace std;

class animal{
    public: 
        string name;
        int age;
        string color;
};

class dog : public animal{
    public:
        void eat (){
            cout << "Eating..." << endl;
        }
};

class charlie : public dog{
    public:
        void bark (){
            cout << "boww..." << endl;
        }
};

int main(){

    charlie d1;

    d1.name = "charlie";
    d1.color= "black";
    d1.age = 10;
    
    cout << d1.name << endl;
    cout << d1.color << endl;
    cout << d1.age << endl;
    
    d1.eat();
    d1.bark();

    return 0;
}