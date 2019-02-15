#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0401 {
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

        bool authorized = true;
        if(age < 18) {
            authorized = false;
            cout << "Restricted access to minors !!!" << endl;
        }

        if(authorized)
            cout << "Authorized Access to " << firstname << " " << surname << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0401::run();
    return 0;
}
*/