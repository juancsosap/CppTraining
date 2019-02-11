#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void authorize(int age) {
    if(age < 18) {
        cout << "Restricted access to minors !!!" << endl;
        return;
    }
    cout << "Authorized Access to adults !!!" << endl;
}

int requestint(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while(number < 0);
    return number;
}

string requeststring(string message) {
    string word;
    cout << message;
    cin >> word;
    return word;
}

void println(string message) {
    cout << message << endl;
}

void print(string message) {
    cout << message;
}

void printline() {
    println("--------------------");
}

void app0704() {
    println("   Access Control   ");
    printline();
    
    string firstname = requeststring("Firstname : ");
    string surname = requeststring("Surname   : ");
    int age = requestint("Age       : ");
    
    printline();
    
    authorize(age);
}

/*
int main(int argc, char** argv) {
    app0704();
    return 0;
}
*/