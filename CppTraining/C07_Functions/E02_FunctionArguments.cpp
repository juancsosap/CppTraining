#include <cstdlib>
#include <iostream>

using namespace std;

void printLine(int length) {
    for(int i = 0; i < length; i++) {
        cout << "-";
    }
    cout << endl;
}

void app0702() {
    for(int i = 1; i < 10; i++) {
        printLine(i);
    }
}

/*
int main(int argc, char** argv) {
    app0702();
    return 0;
}
*/