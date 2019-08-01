#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App1401 {
public:
    class Person {
    public:
        string firstName;
        string secondName;
        string firstSurname;
        string secondSurname;
    };
    
    static void run() {
        Person user;
        cout << "Please write your fullname:" << endl;
        // The default stream extraction operator use the \s \n \t as a separator
        cin >> user.firstName >> user.secondName >> user.firstSurname >> user.secondSurname;
        // Ignore the last ENTER to permit that getline works properly
        // Only is required if alternate between cin and getline
        cin.ignore();
        
        cout << "Thanks for the information ";
        cout << user.firstName << " " << user.secondName << " ";
        cout << user.firstSurname << " " << user.secondSurname << endl;
        
        cout << endl << "--------------------------------------" << endl << endl;
        // getline use \n as separator
        cout << "Address : ";
        string address;
        getline(cin, address);
        
        cout << "All the information will be send to " << address << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1401::run();
    return 0;
}
*/