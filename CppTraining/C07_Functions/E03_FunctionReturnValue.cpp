#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


void app0703() {
}

/*
int main(int argc, char** argv) {
    app0703();
    return 0;
}
*/

class App0703 {
public:
    static long factorial(int number) {
        long result = number;
        for(int i = 1; i < number; i++) {
            result *= i;
        }
        return result;
    }

    static int requestInt(string message) {
        int number;
        do {
            cout << message;
            cin >> number;
        } while(number < 0);
        return number;
    }

    static void run() {
        cout << "     Factorial      " << endl;
        cout << "--------------------" << endl;

        int number = requestInt("Number : ");

        long result = factorial(number);

        cout << "Result : " << result << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0703::run();
    return 0;
}
*/
