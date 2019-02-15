#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0404 {
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

        if(age < 12) {
            cout << "Restricted access to minors than 12 years !!!" << endl;
        } else if(age < 18) {
            cout << "Authorized access to minors than 18 years only with parents !!!" << endl;
        } else {
            cout << "Authorized Access to " << firstname << " " << surname << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0404::run();
    return 0;
}
*/