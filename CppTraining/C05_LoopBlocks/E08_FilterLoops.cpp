#include <cstdlib>
#include <iostream>

using namespace std;

class App0508 {
public:
    static void run() {
        cout << "  Filter Even Numbers " << endl;
        cout << "----------------------" << endl;

        for(int i = 1; i <= 10; i++) {
            if(i % 2 == 0) {
                continue;
            }
            cout << i << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0508::run();
    return 0;
}
*/