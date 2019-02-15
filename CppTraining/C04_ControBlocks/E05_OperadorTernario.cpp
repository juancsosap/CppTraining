#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0405 {
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
        cout << "Age       : ";
        cin >> age;    

        cout << "--------------------" << endl;

        string message = (age < 18) ? "Restricted Access to minors !!!" :
                                      "Authorized Access to adults !!!";

        cout << message << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0405::run();
    return 0;
}
*/