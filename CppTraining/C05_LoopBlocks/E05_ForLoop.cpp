#include <cstdlib>
#include <iostream>

using namespace std;

class App0505 {
public:
    static void run() {
        cout << "     Factorial      " << endl;
        cout << "--------------------" << endl;

        int number;
        do {
            cout << "Number : ";
            cin >> number;
        } while(number < 0);

        long result = number;
        for(int i = 1; i < number; i++) {
            result *= i;
        }

        cout << "Result : " << result << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0505::run();
    return 0;
}
*/