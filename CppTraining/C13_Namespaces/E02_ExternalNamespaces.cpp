#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#include "E02_External.cpp"

class App1302 {
public:
    static void run() {
        One::show("Hola");
        Two::show("Hola");
        Three::Shower::show("Hola");
    }
};

/*
int main(int argc, char** argv) {
    App1302::run();
    return 0;
}
*/