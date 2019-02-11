#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Global Scope
string end = "!!!";

// Function Scope
void greeting(string name) {
    string word = "Hello";
    string end = "$$$";
    cout << word << " " << name << end << endl;
}

// Function Scope
inline void farewell(string name) {
    string word = "Goodbye";
    cout << word << " " << name << end << endl;
}

void app0708() {
    // Local Scope
    string word = "Hi";
    string name = "Juan";
    cout << word << " " << name << end << endl;

    greeting("Carlos");
    
    cout << word << " " << name << end << endl;

    farewell("Luis");
    
    cout << word << " " << name << end << endl;
    
    // Block Scope
    for(int i = 0; i < 3; i++) {
        string name = "Pepe";
        greeting(name);
        farewell(name);
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

/*
int main(int argc, char** argv) {
    app0708();
    return 0;
}
*/