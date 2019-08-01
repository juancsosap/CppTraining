#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0501 {
public:
    static void run() {
        cout << "   Access Control   " << endl;
        cout << "--------------------" << endl;

        string firstname;
        cout << "Firstname : ";
        cin >> firstname;

        string surname;
        cout << "Surname   : ";
        cin >> surname;

        int age = -1;
        while(age < 0 || age > 120) {
            cout << "Age       : ";
            cin >> age;
        }

        cout << "--------------------" << endl;

        string message = (age < 12) ? "Restricted access to minors than 12 years !!!" :
                         (age < 18) ? "Authorized access to minors than 18 years only with parents !!!" :
                                      "Authorized Access to adults !!!";

        cout << message << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0501::run();
    return 0;
}
*/