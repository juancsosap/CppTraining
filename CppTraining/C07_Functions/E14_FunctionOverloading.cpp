#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0714 {
public:
    static void sayHello() {
        cout << "Hello" << endl;
    }

    static void sayHello(string name) {
        cout << "Hello " << name << endl;
    }

    //static int  sayHello(string name) {}; // Error : ambiguous reference
    //static void sayHello(string surname) {}; // Error : ambiguous reference 

    static void sayHello(int quantity) {
        for(int i=0; i<quantity; i++) {
            cout << "Hello" << endl;
        }
    }

    static void sayHello(string name, int quantity) {
        for(int i=0; i<quantity; i++) {
            cout << "Hello " << name << endl;
        }
    }

    static void sayHello(int quantity, string end) {
        for(int i=0; i<quantity; i++) {
            cout << "Hello" << end << endl;
        }
    }

    static void run() {
        sayHello();
        cout << endl;

        sayHello("Juan");
        cout << endl;

        sayHello(3);
        cout << endl;

        sayHello("Luis", 4);
        cout << endl;

        sayHello(5, "!!!");
        cout << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0714::run();
    return 0;
}
*/