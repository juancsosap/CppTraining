#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void print(string message = "---------", int quantity = 1) {
    for(int i = 0; i < quantity; i++) {
        cout << message;
    }
    cout << endl;
}

void app0706() {
    print("-");
    for(int i = 1; i < 10; i++) {
        print("-", i);
    }
    print("--------------------");
}

/*
int main(int argc, char** argv) {
    app0706();
    return 0;
}
*/