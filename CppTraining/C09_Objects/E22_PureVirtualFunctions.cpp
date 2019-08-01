#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0922 {
public:
    // Include methods without body (abstract) and couldn't be instantiated
    // It only contains pure virtual methods then its behavior is like an Interface
    class Describable {
    public:
        virtual void describe() = 0;
    };

    // It class implement the inherited method without body
    class Person : public Describable {
    public:
        string name;
        
        Person(string name) {
            this->name = name;
        }
        
        void describe() {
            cout << "My name is " << this->name << endl;
        }
    };

    // It class implement the inherited method without body
    class Transport : public Describable {
    public:
        string type;
        
        Transport(string type) {
            this->type = type;
        }
        
        void describe() {
            cout << "It's a transport of type " << this->type << endl;
        }
    };

    // It class didn't implement the inherited method without body
    // It couldn't be instantiated
    class Figure : public Describable {
    public:
        string shape;
        
        Figure(string shape) {
            this->shape = shape;
        }
    };

    // It class implement the inherited method without body
    class Circle : public Figure {
    public:
        double radio;
        
        Circle(double radio) : Figure("Circle") {
            this->radio = radio;
        }
        
        void describe() {
            cout << "It's a Circle Figure with a radio of " << this->radio << endl;
        }
    };

    class Describer {
    public:
        static void show(Describable *obj) {
            cout << "----------------------------------------------------" << endl;
            obj->describe();
            cout << "----------------------------------------------------" << endl;
        }
    };
    
    static void run() {
        Person *juan = new Person("Juan");
        Transport *boat = new Transport("Boat");
        //Figure *square = new Figure("Square"); // abstract classes couldn't be instatiated
        Circle *small = new Circle(10);
        
        Describer::show(juan);
        Describer::show(boat);
        Describer::show(small);
    }
};

/*
int main(int argc, char** argv) {
    App0922::run();
    return 0;
}
*/