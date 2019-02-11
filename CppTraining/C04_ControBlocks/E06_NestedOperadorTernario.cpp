#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void app0406() {
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
    
    string message = (age < 12) ? "Restricted access to minors than 12 years !!!" :
                     (age < 18) ? "Authorized access to minors than 18 years only with parents !!!" :
                                  "Authorized Access to adults !!!";
        
    cout << message << endl;
}

/*
int main(int argc, char** argv) {
    app0406();
    return 0;
}
*/