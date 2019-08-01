#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

class App1008 {
public:    
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

            try {
                if(num2 == 0) throw 203;
            } catch(int er) {
                cout << "-----------------" << endl;
                cout << "Error Generated. The Program was Interrupted" << endl;
                if(er == 203) throw runtime_error("Error 203 : Divided by Zero Error");
                else throw runtime_error("Unknown Error");
            }
                        
            num3 = num1 / num2;
            // If num2 value of zero (0) is provided an "Arithmetic Exception" is generated

            cout << "-----------------\nResult   : " << num3 << endl;

        } catch(runtime_error ex) { // Catch Runtime Exceptions
            cout << ex.what() << endl;
        }
        
        
    }
};

/*
int main(int argc, char** argv) {
    App1008::run();
    return 0;
}
*/