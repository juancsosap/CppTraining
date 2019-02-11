#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void app0405() {
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

/*
int main(int argc, char** argv) {
    app0405();
    return 0;
}
*/