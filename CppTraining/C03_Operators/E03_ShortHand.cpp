#include <cstdlib>
#include <iostream>

using namespace std;

void app0303() {
    cout << "  Basic Operations  " << endl;
    cout << "--------------------" << endl;
    
    int num1;
    cout << "number #1 : ";
    cin >> num1;
    
    int num2;
    cout << "number #2 : ";
    cin >> num2;
        
    cout << endl << "      Results       ";
    cout << endl << "--------------------";
    
    num1 += num2;
    cout << endl << "Addition       : " << num1;
    
    num1 -= num2;
    cout << endl << "Subtraction    : " << num1;
    
    num1 *= num2;
    cout << endl << "Multiplication : " << num1;
    
    num1 /= num2;
    cout << endl << "Division       : " << num1;
    
    num1 %= num2;
    cout << endl << "Modulus        : " << num1;
}

/*
int main(int argc, char** argv) {
    app0303();
    return 0;
}
*/