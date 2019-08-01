#include <cstdlib>
#include <iostream>

using namespace std;

class App0408 {
public:
    static void run() {
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

        // Switch Block works with short, int, long, char or enum type values 
        switch(oper) {
            case 'a': case 'A':
                cout << endl << "Result : " << num1 + num2 << endl;
                break;
            case 's': case 'S':
                cout << endl << "Result : " << num1 - num2 << endl;
                break;
            case 'm': case 'M':
                cout << endl << "Result : " << num1 * num2 << endl;
                break;
            case 'd': case 'D':
                cout << endl << "Result : " << num1 / num2 << endl;
                break;
            default:
                cout << endl << "No valid option selected." << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0408::run();
    return 0;
}
*/