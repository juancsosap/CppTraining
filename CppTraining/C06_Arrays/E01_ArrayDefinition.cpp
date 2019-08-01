#include <cstdlib>
#include <iostream>

using namespace std;

class App0601 {
public:
    static void run() {
        cout << "       Primes       " << endl;
        cout << "--------------------" << endl;

        int primes[] = {1, 2, 3, 5, 7, 13, 17};

        int size = sizeof(primes) / sizeof(primes[0]);

        for(int i = 0; i < size; i++) {
            cout << "Number [" << i << "] : " << primes[i] << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0601::run();
    return 0;
}
*/