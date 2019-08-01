#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0927 {
public:
    static void func1() {
        class Person {
        public:
            string fullname;
            int age;
            bool active;

            Person(string fullname, int age, bool active) {
                this->fullname = fullname;
                this->age = age;
                this->active = active;
            }

            void display() {
                cout << "---------------------------------------" << endl;
                cout << "Fullname : " << this->fullname << endl;
                cout << "Age      : " << this->age << " years" << endl;
                cout << "Active   : " << (this->active ? "True" : "False") << endl;
                cout << "---------------------------------------" << endl;
            }
        };

        Person *jcsp = new Person("Juan Carlos Sosa Peña", 36, true);
        jcsp->display();
    }

    static void func2() {
        // Person jcsp; // Class not available outside the scope of func1 function
    }
    
    static void run() {
        func1();

        // Person jcsp; // Class not available outside the scope of func1 function
    }
};

/*
int main(int argc, char** argv) {
    App0927::run();
    return 0;
}
*/