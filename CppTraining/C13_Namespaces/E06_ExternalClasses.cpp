#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#include "E06_Classes.h"

class App1306 {
public:
    static void run() {
        Item i1(10);
        cout << i1.get() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1306::run();
    return 0;
}
*/