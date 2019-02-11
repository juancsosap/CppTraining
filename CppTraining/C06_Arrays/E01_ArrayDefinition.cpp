#include <cstdlib>
#include <iostream>

using namespace std;

void app0601() {
    cout << "       Primes       " << endl;
    cout << "--------------------" << endl;
    
    int primes[] = {1, 2, 3, 5, 7, 13, 17};
    
    int size = sizeof(primes) / sizeof(primes[0]);
    
    for(int i = 0; i < size; i++) {
        cout << "Number [" << i << "] : " << primes[i] << endl;
    }
}

/*
int main(int argc, char** argv) {
    app0601();
    return 0;
}
*/