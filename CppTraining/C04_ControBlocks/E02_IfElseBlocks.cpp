#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void app0402() {
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
    
    if(age < 18) {
        cout << "Restricted access to minors !!!" << endl;
    } else {
        cout << "Authorized Access to " << firstname << " " << surname << endl;
    }
}

/*
int main(int argc, char** argv) {
    app0402();
    return 0;
}
*/