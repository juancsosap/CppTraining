#include <cstdlib>
#include <iostream>

using namespace std;

class App0206 {
public:
    static void run() {
        int integer = 10;
        int *integerPtr = NULL;
        integerPtr = &integer;
        cout << integer << " - " << &integer << " : " << integerPtr << " - " << *integerPtr << endl;

        double decimal = 10.75;
        double *decimalPtr;
        decimalPtr = &decimal;
        cout << decimal << " - " << &decimal << " : " << decimalPtr << " - " << *decimalPtr << endl;

        bool boolean = true;
        bool *booleanPtr = &boolean;
        cout << boolean << " - " << &boolean << " : " << booleanPtr << " - " << *booleanPtr << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0206::run();
    return 0;
}
*/