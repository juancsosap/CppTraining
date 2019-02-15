#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0707 {
public:
    // During execution this code could be call
    static void printGreeting(string name) {
        string word = "Hello";
        cout << word << " " << name << endl;
    }

    // During compilation this code will be place where the function is call
    // No function call occur during execution
    static inline void printFarewell(string name) {
        string word = "Goodbye";
        cout << word << " " << name << endl;
    }

    static void run() {
        // Function code will be call 4 times
        // But in the code will exist only one time
        printGreeting("Carlos");
        printGreeting("Luis");
        printGreeting("Pepe");
        printGreeting("Ana");

        // Function code will be paste 4 times
        // Then in the code will exist 4 copies
        printFarewell("Carlos");
        printFarewell("Luis");
        printFarewell("Pepe");
        printFarewell("Ana");
    }
};

/*
int main(int argc, char** argv) {
    App0707::run();
    return 0;
}
*/