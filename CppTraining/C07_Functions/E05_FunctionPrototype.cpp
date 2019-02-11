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

int request(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while(number < 0);
    return number;
}

void app0705() {
    cout << "   Irregular Increment   " << endl;
    
    int max = request("Number     : ");
    
    changeEven(0, max);
}

/*
int main(int argc, char** argv) {
    app0705();
    return 0;
}
*/