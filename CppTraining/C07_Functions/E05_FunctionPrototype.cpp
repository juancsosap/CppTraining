#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void changeEven(int num, int max);
void changeOdd(int num, int max);

void changeEven(int num, int max) {
    if(num % 2 == 0) {
        cout << num << endl;
        num += 3;
    }
    if(num < max) {
        changeOdd(num, max);
    }    
}

void changeOdd(int num, int max) {
    if(num % 2 == 1) {
        cout << num << endl;
        num++;
    }
    if(num < max) {
        changeEven(num, max);
    }    
}

class App0705 {
public:
    static int requestInt(string message) {
        int number;
        do {
            cout << message;
            cin >> number;
        } while(number < 0);
        return number;
    }

    static void run() {
        cout << "   Irregular Increment   " << endl;

        int max = requestInt("Number     : ");

        changeEven(0, max);
    }
};

/*
int main(int argc, char** argv) {
    App0705::run();
    return 0;
}
*/