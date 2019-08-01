#include <cstdlib>
#include <iostream>

using namespace std;

class App1001 {
public:    
    static void run() {
        cout << "     Divider     " << endl;
        cout << "-----------------" << endl;
        
        int num1, num2, num3;
        
        cout << "Number 1 : ";
        cin >> num1;
        // If not integer value is provided an "Arithmetic Exception" is generated

        cout << "Number 2 : ";
        cin >> num2;
        // If not integer value is provided an "Arithmetic Exception" is generated
        
        num3 = num1 / num2;
        // If num2 value of zero (0) is provided an "Arithmetic Exception" is generated
        
        cout << "-----------------" << endl;
        cout << "Result   : " << num3 << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1001::run();
    return 0;
}
*/