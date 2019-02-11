#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

union value {
    long integer;
    double decimal;
    char character;
    bool boolean;
};

void app0805() {
    // Share Memory
    cout << "Size : " << sizeof(value) << " Bytes" << endl << endl;
    
    value value1;

    value1.integer = 100;
    cout << "Value I : " << value1.integer << endl;
    cout << "Value D : " << value1.decimal << endl;
    cout << "Value C : " << value1.character << endl;
    cout << "Value B : " << value1.boolean << endl << endl;

    value1.decimal = 100.100;
    cout << "Value I : " << value1.integer << endl;
    cout << "Value D : " << value1.decimal << endl;
    cout << "Value C : " << value1.character << endl;
    cout << "Value B : " << value1.boolean << endl << endl;
    
    value1.character = 'A';
    cout << "Value I : " << value1.integer << endl;
    cout << "Value D : " << value1.decimal << endl;
    cout << "Value C : " << value1.character << endl;
    cout << "Value B : " << value1.boolean << endl << endl;
    
    value1.boolean = true;
    cout << "Value I : " << value1.integer << endl;
    cout << "Value D : " << value1.decimal << endl;
    cout << "Value C : " << value1.character << endl;
    cout << "Value B : " << value1.boolean << endl << endl;
}

/*
int main(int argc, char** argv) {
    app0805();
    return 0;
}
*/