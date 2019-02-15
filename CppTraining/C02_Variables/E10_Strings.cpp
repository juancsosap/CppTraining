#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0210 {
public:
    static void run() {
        // Variable definition
        string firstname = "Luis";
        string lastname = "Perez";

        // String Concatenation
        string fullname = firstname + " " + lastname;
        cout << "--------------------------" << endl;
        cout << "Variable : " << "fullname" << endl;
        cout << "Value    : " << fullname << endl;
        cout << "Length    : " << fullname.length() << endl;
        cout << "Capacity : " << fullname.capacity() << endl;
        cout << "Address  : " << &fullname << endl;
        cout << "Size     : " << sizeof(fullname) << endl;
        cout << "--------------------------" << endl;

        string email = firstname + "." + lastname;
        cout << "--------------------------" << endl;
        cout << "Variable : " << "email" << endl;
        cout << "Value    : " << email << endl;
        cout << "Length   : " << email.length() << endl;
        cout << "Capacity : " << email.capacity() << endl;
        cout << "Address  : " << &email << endl;
        cout << "Size     : " << sizeof(email) << endl;
        cout << "--------------------------" << endl;

        fullname += " ";
        cout << "--------------------------" << endl;
        cout << "Variable : " << "fullname" << endl;
        cout << "Value    : " << fullname << endl;
        cout << "Length   : " << fullname.length() << endl;
        cout << "Capacity : " << fullname.capacity() << endl;
        cout << "Address  : " << &fullname << endl;
        cout << "Size     : " << sizeof(fullname) << endl;
        cout << "--------------------------" << endl;

        email += "@gmail.com";
        cout << "--------------------------" << endl;
        cout << "Variable : " << "email" << endl;
        cout << "Value    : " << email << endl;
        cout << "Length   : " << email.length() << endl;
        cout << "Capacity : " << email.capacity() << endl;
        cout << "Address  : " << &email << endl;
        cout << "Size     : " << sizeof(email) << endl;
        cout << "--------------------------" << endl;

        fullname += "Jimenez";
        cout << "--------------------------" << endl;
        cout << "Variable : " << "fullname" << endl;
        cout << "Value    : " << fullname << endl;
        cout << "Length   : " << fullname.length() << endl;
        cout << "Capacity : " << fullname.capacity() << endl;
        cout << "Address  : " << &fullname << endl;
        cout << "Size     : " << sizeof(fullname) << endl;
        cout << "--------------------------" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0210::run();
    return 0;
}
*/