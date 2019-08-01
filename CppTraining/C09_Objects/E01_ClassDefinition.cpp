#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0901 {
public:
    class Person {
    public:
        // Fields
        string name;
        int age;
        char gender;
        bool active;

        // Methods
        void display() {
            cout << "-------------------" << endl;
            cout << " Name   : " << name << endl;
            cout << " Age    : " << age << " years old" << endl;
            cout << " Gender : " << (gender == 'M' ? "Male" : "Female") << endl;
            cout << " Status : " << (active ? "Active" : "Suspended") << endl;
            cout << "-------------------" << endl;
        }
    };
    
    static void run() {
        Person juan, ana;

        juan.name = "Juan";
        juan.age = 36;
        juan.gender = 'M';
        juan.active = true;

        ana.name = "Ana";
        ana.age = 35;
        ana.gender = 'F';
        ana.active = true;

        juan.display();
        ana.display();
    }
};

/*
int main(int argc, char** argv) {
    App0901::run();
    return 0;
}
*/