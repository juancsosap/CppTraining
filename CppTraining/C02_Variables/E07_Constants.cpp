#include <cstdlib>
#include <iostream>

using namespace std;

class App0207 {
public:
    static void run() {
        const double PI = 3.1415926535;

        // PI = 3; // It generate a compilation error
    }
};

/*
int main(int argc, char** argv) {
    App0207::run();
    return 0;
}
*/