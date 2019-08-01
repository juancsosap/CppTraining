#include <cstdlib>
#include <iostream>

using namespace std;

class App0602 {
public:
    static void run() {
        cout << "       Evens        " << endl;
        cout << "--------------------" << endl;

        int quantity;
        cout << "Quantity : ";
        cin >> quantity;

        int evens[quantity];

        int number = 1;
        int i = 0;
        while(i < quantity) {
            if((number % 2) == 0) {
                evens[i++] = number;
            }
            number++;
        }

        for(int i = 0; i < quantity; i++) {
            cout << "Number [" << i << "] : " << evens[i] << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0602::run();
    return 0;
}
*/