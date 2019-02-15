#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0409 {
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

        switch(age) {
            case 0 ... 11 :
                cout << "Restricted access to minors than 12 years !!!" << endl;
                break;
            case 12 ... 17 :
                cout << "Minors than 18 years must be with their parents !!!" << endl;
            default:
                cout << "Authorized Access to " << firstname << " " << surname << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0409::run();
    return 0;
}
*/