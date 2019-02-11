#include <cstdlib>
#include <iostream>

using namespace std;

int operate(int num1, int num2, char oper) {
    switch(oper) {
        case 'a': case 'A': return num1 + num2;
        case 's': case 'S': return num1 - num2;
        case 'm': case 'M': return num1 * num2;
        case 'd': case 'D': return num1 / num2;
    }
}

void app0709() {
    cout << "     Calculator     " << endl;
    cout << "--------------------" << endl;
    
    int num1;
    cout << "number #1 : ";
    cin >> num1;
    
    int num2;
    cout << "number #2 : ";
    cin >> num2;
   
    cout << endl << "      Operator      ";
    cout << endl << "--------------------";
    cout << endl << "A. Addition       ";
    cout << endl << "S. Subtraction    ";
    cout << endl << "M. Multiplication ";
    cout << endl << "D. Division       ";
   
    char oper;
    cout << endl << "Operation : ";
    cin >> oper;    
    
    cout << endl << "--------------------";
    
    switch(oper) {
        case 'a': case 'A':
        case 's': case 'S':
        case 'm': case 'M':
        case 'd': case 'D':
            cout << endl << "Result : " << operate(num1, num2, oper) << endl;
            break;
        default:
            cout << endl << "No valid option selected." << endl;
    }
}

/*
int main(int argc, char** argv) {
    app0709();
    return 0;
}
*/