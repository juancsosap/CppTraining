#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0906 {
public:
    class ObjectA {
    private:
        string value;

    public:
        string getValue() { return "ObjectA - " + value; }
        void setValue(string value) { ObjectA::value = value; }
    };

    class ObjectB {
    private:
        string value;

    public:
        string getValue() { return "ObjectB - " + value; }
        void setValue(string value) { ObjectB::value = value; }

        ObjectB() {
            cout << "Explicit Default Constructor Called" << endl;
        }
    };

    class ObjectC {
    private:
        string value;

    public:
        string getValue() { return "ObjectC - " + value; }
        void setValue(string value) { ObjectC::value = value; }

        ObjectC(string value) {
            cout << "Explicit Not Default Constructor Called" << endl;
            setValue(value);
        }
    };

    static void run() {
        ObjectA obj1; // Implicit Default Constructor is Call 
        obj1.setValue("Object1");
        cout << obj1.getValue() << endl;
        cout << "---------------------------------------------" << endl;

        ObjectA *obj2 = new ObjectA(); // Implicit Default Constructor is Call 
        obj2->setValue("Object2");
        cout << obj2->getValue() << endl;
        cout << "---------------------------------------------" << endl;

        ObjectB obj3; // Explicit Default Constructor is Call 
        obj3.setValue("Object3");
        cout << obj3.getValue() << endl;
        cout << "---------------------------------------------" << endl;

        ObjectB *obj4 = new ObjectB(); // Explicit Default Constructor is Call 
        obj4->setValue("Object4");
        cout << obj4->getValue() << endl;
        cout << "---------------------------------------------" << endl;

        //ObjectC obj5; // Error: Not Default Constructor Available 
        //ObjectC *obj6 = new ObjectC(); // Error: Not Default Constructor Available 

        ObjectC *obj7 = new ObjectC("Object7"); // Explicit Not Default Constructor is Call 
        cout << obj7->getValue() << endl;
        cout << "---------------------------------------------" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0906::run();
    return 0;
}
*/