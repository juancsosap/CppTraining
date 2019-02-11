#include <cstdlib>
#include <iostream>

using namespace std;

void printLine() {
    cout << "--------------------" << endl;
}

void app0701() {
    for(int i = 1; i < 10; i++) {
        printLine();
    }
}

/*
int main(int argc, char** argv) {
    app0701();
    return 0;
}
*/