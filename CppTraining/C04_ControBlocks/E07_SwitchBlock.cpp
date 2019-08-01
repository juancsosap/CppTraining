#include <cstdlib>
#include <iostream>

using namespace std;

class App0407 {
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
        cout << endl << "1. Addition       ";
        cout << endl << "2. Subtraction    ";
        cout << endl << "3. Multiplication ";
        cout << endl << "4. Division       ";
        cout << endl << "5. Modulus        ";

        int oper;
        cout << endl << "Operation : ";
        cin >> oper;    

        cout << endl << "--------------------";

        // Switch Block works with short, int, long, char or enum type values 
        switch(oper) {
            case 1:
                cout << endl << "Result : " << num1 + num2 << endl;
                break;
            case 2:
                cout << endl << "Result : " << num1 - num2 << endl;
                break;
            case 3:
                cout << endl << "Result : " << num1 * num2 << endl;
                break;
            case 4:
                cout << endl << "Result : " << num1 / num2 << endl;
                break;
            case 5:
                cout << endl << "Result : " << num1 % num2 << endl;
                break;
            default:
                cout << endl << "No valid option selected." << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App0407::run();
    return 0;
}
*/