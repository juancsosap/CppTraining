#include <cstdlib>
#include <iostream>

using namespace std;

class App0604 {
public:
    static void run() {
        long primes[] = {1, 2, 3, 5, 7, 13, 17};

        long *arrayptr = primes;
        cout << "Address     : " << arrayptr << endl;

        long firstitem = *primes;
        cout << "First Item  : " << firstitem << " | " << primes[0] << endl;

        long itemsize = sizeof(*primes);
        cout << "Item Size   : " << itemsize << endl;

        long arraysize = sizeof(primes);
        cout << "Array Size  : " << arraysize << endl;

        long quantity = arraysize / itemsize;
        cout << "Quantity    : " << quantity << endl;

        long *lastitemaddress = arrayptr + (quantity - 1);
        long lastitem = *lastitemaddress;
        cout << "Last Item   : " << lastitem << " | " << primes[quantity - 1] << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0604::run();
    return 0;
}
*/