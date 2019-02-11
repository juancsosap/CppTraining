#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// During execution this code could be call
void printgreeting(string name) {
    string word = "Hello";
    cout << word << " " << name << endl;
}

// During compilation this code will be place where the function is call
// No function call occur during execution
inline void printfarewell(string name) {
    string word = "Goodbye";
    cout << word << " " << name << endl;
}

void app0707() {
    
    // Function code will be call 4 times
    // But in the code will exist only one time
    printgreeting("Carlos");
    printgreeting("Luis");
    printgreeting("Pepe");
    printgreeting("Ana");
    
    // Function code will be paste 4 times
    // Then in the code will exist 4 copies
    printfarewell("Carlos");
    printfarewell("Luis");
    printfarewell("Pepe");
    printfarewell("Ana");
    
}

/*
int main(int argc, char** argv) {
    app0707();
    return 0;
}
*/