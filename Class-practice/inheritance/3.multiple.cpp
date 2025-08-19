#include <iostream>

using namespace std;

class Engine{
    public: 
        string type;
        int power;
        int size;

};

class Wheels{
    public:
        string material;
        int weight;
        string rolling;
};

class Car : public Engine, public Wheels{
    public:
        string name;
        int price;
        string color;
};

int main(){
    Car c1;

    c1.name = "Tarzen";
    c1.price = 10000000;
    c1.color = "Blue / Purpule";
    c1.material = "Steel";
    c1.weight = 191;
    c1.rolling = "Material Hardness";
    c1.type = "diesel";
    c1.power = 200;
    c1.size = 40;

    cout << c1.name << endl;
    cout << c1.price << endl;
    cout << c1.color << endl;
    cout << c1.material << endl;
    cout << c1.weight << endl;
    cout << c1.rolling << endl;
    cout << c1.type << endl;
    cout << c1.power << endl;
    cout << c1.size << endl;
    

    return 0;
}