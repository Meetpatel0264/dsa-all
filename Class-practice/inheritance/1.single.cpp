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

int main(){

    dog d1;

    d1.name = "Sheru";
    d1.color= "Brown";
    d1.age = 8;
    
    cout << d1.name << endl;
    cout << d1.color << endl;
    cout << d1.age << endl;
    
    d1.eat();

    return 0;
}