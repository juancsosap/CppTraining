#include <cstdlib>
#include <iostream>

using namespace std;

class App0506 {
public:
    static void run() {
        cout << " Multiplication Table " << endl;
        cout << "----------------------" << endl;

        for(int i = 1; i <= 10; i++) {
            cout << endl << "### " << i << " ###" << endl;
            for(int j = 1; j <= 10; j++) {
                cout << i << "x" << j << " = " << i*j << endl;
            }
        }
    }
};

/*
int main(int argc, char** argv) {
    App0506::run();
    return 0;
}
*/