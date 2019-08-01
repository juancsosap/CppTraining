#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

class App1007 {
public:    
    // Only the specified type are propagared to the next stack level
    // if no throw keyword is specified all kinds of errors are propagared
    static int divide(int num1, int num2) throw(runtime_error) {
        if(num2 == 0) throw runtime_error("Error 203 : Divided by Zero Error");
            
        return num1 / num2;
        // If num2 value of zero (0) is provided an "Arithmetic Exception" is generated
    }
    
    static void run() {
        cout << "     Divider     " << endl;
        cout << "-----------------" << endl;
        
        int num1, num2, num3;
        
        try {

            cout << "Number 1 : ";
            cin >> num1;
            // If not integer value is provided an "Arithmetic Exception" is generated

            cout << "Number 2 : ";
            cin >> num2;
            // If not integer value is provided an "Arithmetic Exception" is generated

            num3 = divide(num1, num2);
            
            cout << "-----------------" << endl;
            cout << "Result   : " << num3 << endl;

        } catch(runtime_error ex) { // Catch Runtime Exceptions
            cout << "-----------------" << endl;
            cout << "Error Generated. The Program was Interrupted" << endl;
            cout << ex.what() << endl;
        }
        
        
    }
};

/*
int main(int argc, char** argv) {
    App1007::run();
    return 0;
}
*/