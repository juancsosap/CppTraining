#include <cstdlib>
#include <iostream>

using namespace std;

class App0702 {
public:
    static void printLine(int length) {
        for(int i = 0; i < length; i++) {
            cout << "-";
        }
        cout << endl;
    }

    static void run() {
        for(int i = 1; i < 10; i++) {
            printLine(i);
        }
    }
};

/*
int main(int argc, char** argv) {
    App0702::run();
    return 0;
}
*/