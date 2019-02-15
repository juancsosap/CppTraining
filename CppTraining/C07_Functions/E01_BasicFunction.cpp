#include <cstdlib>
#include <iostream>

using namespace std;

class App0701 {
public:
    static void printLine() {
        cout << "--------------------" << endl;
    }

    static void run() {
        for(int i = 1; i < 10; i++) {
            printLine();
        }
    }
};

/*
int main(int argc, char** argv) {
    App0701::run();
    return 0;
}
*/