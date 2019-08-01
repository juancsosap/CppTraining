#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0105 {
public:
    static void run() {
        cout << "What is your name" << endl;

        string name;
        // >> String input operator
        cin >> name;

        cout << "Welcome " << name << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0105::run();
    return 0;
}
*/