#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Global Scope
string end = "!!!";

class App0708 {
public:
    // Function Scope
    static void printGreeting(string name) {
        string word = "Hello";
        string end = "$$$";
        cout << word << " " << name << end << endl;
    }

    // Function Scope
    static inline void printFarewell(string name) {
        string word = "Goodbye";
        cout << word << " " << name << end << endl;
    }

    static void run() {
        // Local Scope
        string word = "Hi";
        string name = "Juan";
        cout << word << " " << name << end << endl;

        printGreeting("Carlos");

        cout << word << " " << name << end << endl;

        printFarewell("Luis");

        cout << word << " " << name << end << endl;

        // Block Scope
        for(int i = 0; i < 3; i++) {
            string name = "Pepe";
            printGreeting(name);
            printFarewell(name);
        }

        // Block Scope
        do {
            string end = "###";
            cout << word << " " << name << end << endl;
        } while(false);

        // Block Scope
        if(true) {
            string word = "Nice to meet you,";
            cout << word << " " << name << end << endl;
        }

        cout << word << " " << name << end << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0708::run();
    return 0;
}
*/