#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0713 {
public:
    static long factorial(int number) {
        return (number == 1) ? 1 : number * factorial(number - 1);  
    }

    static int getInt(string message) {
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

        int number = getInt("Number : ");

        long result = factorial(number);

        cout << "Result : " << result << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0713::run();
    return 0;
}
*/