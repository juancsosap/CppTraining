#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0706 {
public:
    static void println(string message = "---------", int quantity = 1) {
        for(int i = 0; i < quantity; i++) {
            cout << message;
        }
        cout << endl;
    }

    static void run() {
        println("-");
        for(int i = 1; i < 10; i++) {
            println("-", i);
        }
        println("--------------------");
    }
};

/*
int main(int argc, char** argv) {
    App0706::run();
    return 0;
}
*/