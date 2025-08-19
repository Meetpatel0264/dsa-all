#include <iostream>

using namespace std;

class shape{
    public:
        virtual void draw() = 0;
        virtual float area() = 0;
};

class circle : public shape{
    public:
        float radius;
        void draw () {
            cout << "Drawing a Circle..." << endl;
        }

        float area () {
            cout << "Enter The Circle Area : ";
            cin >> radius;

            float a = 3.14 * radius * radius;
            // cout << "Area of the circle is : " << a;
            return a;
        }
};

class Triangle : public shape{
    public:
        float radius;
        float base, height;
        void draw () {
            cout << "Drawing a triangle..." << endl;
        }

        float area() {
            cout << "Enter The base of triangle Area : ";
            cin >> base;

            cout << "Enter The height of triangle Area : ";
            cin >> height;

            float b = 0.5 * base * height;
            // cout << "Area of the circle is : " << b;
            return b;
        }
};

int main(){

    circle c1;
    Triangle t1;

    c1.draw();
    c1.area();

    t1.draw();
    t1.area();



    return 0;
}