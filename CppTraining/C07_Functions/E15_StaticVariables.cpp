#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0715 {
public:
    static int counter() {
        // Initialized only one time and storage in the Heap Memory
        static int count = 0;
        count++;
    }

    static void run() {
        cout << "Function called " << counter() << " times" << endl;
        cout << "Function called " << counter() << " times" << endl;
        cout << "Function called " << counter() << " times" << endl;
        cout << "Function called " << counter() << " times" << endl;
        cout << "Function called " << counter() << " times" << endl;
        cout << "Function called " << counter() << " times" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0715::run();
    return 0;
}
*/