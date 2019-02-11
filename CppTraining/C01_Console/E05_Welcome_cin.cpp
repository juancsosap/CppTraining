#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void app0105() {
    cout << "What is your name" << endl;
    
    string name;
    // >> String input operator
    cin >> name;
    
    cout << "Welcome " << name << endl;
}

/*
int main(int argc, char** argv) {
    app0105();
    return 0;
}
*/