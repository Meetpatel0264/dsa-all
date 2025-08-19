#include <iostream>

using namespace std;

class Animal{
    public: 
        string name;
        int age;
        string color;
};

class Cat : public Animal{
    public:
        void cat (){
            cout << "meao..." << endl;
        }
};

class Dog : public Animal{
    public:
        void bark (){
            cout << "boww..." << endl;
        }
};

int main(){

    Cat c1;
    Dog d1;

    d1.name = "charlie";
    d1.color= "brown";
    d1.age = 10;

    c1.name = "sigma";
    c1.color= "black";
    c1.age = 9;
    
    cout << d1.name << endl;
    cout << d1.color << endl;
    cout << d1.age << endl;
    d1.bark();
    cout << "\n";

    
    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << c1.age << endl;
    c1.cat();

    
    

    return 0;
}