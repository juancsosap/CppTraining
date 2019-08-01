#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0502 {
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

        int age;
        while(true) {
            cout << "Age       : ";
            cin >> age;
            if(age >= 0 && age <= 120) // Output Condition
                break;
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
    App0502::run();
    return 0;
}
*/