#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0903 {
public:
    class Car {
    public:
        string brand;
        string model;
        int year;
        string color;

        void display() {
            cout << "-------------------" << endl;
            cout << " Brand   : " << brand << endl;
            cout << " Model   : " << model << endl;
            cout << " Year    : " << year << endl;
            cout << " Color   : " << color << endl;
            cout << "-------------------" << endl;
        }
    };

    static void run() {
        // Storage in STACK Memory
        Car car1;

        car1.brand = "Chevrolet";
        car1.model = "Aveo";
        car1.year = 2011;
        car1.color = "gray";

        car1.display();

        // No delete command available for objects in the Stack Memory

        // Storage in HEAP Memory
        Car *car2 = new Car();

        car2->brand = "Renault";
        car2->model = "Clio";
        car2->year = 2015;
        car2->color = "blue";

        car2->display();

        delete car2; // object in the Heap Memory could be deleted as 
    }
};

/*
int main(int argc, char** argv) {
    App0903::run();
    return 0;
}
*/