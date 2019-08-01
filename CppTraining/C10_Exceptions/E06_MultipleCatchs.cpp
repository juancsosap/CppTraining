#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

/*
 * Exception --> std:bad_alloc
 *           --> std:bad_cast
 *           --> std:bad_typeid
 *           --> std:bad_exception
 *           --> std:logic_failure --> std:domain_error
 *                                 --> std:invalid_argument
 *                                 --> std:length_error
 *                                 --> std:out_of:range
 *           --> std:runtime_error --> std:overflow_error
 *                                 --> std_range_error
 *                                 --> std:underflow_error
 */

class App1006 {
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

            if(num2 == 0) {
                if(num1 == 0) throw runtime_error("Error 203 : Divided by Zero Error");
                if(num1 > 10) throw "Divided by Zero Error";
                if(num1 > 0) throw 203;
                if(num1 < 0) throw false;
            }
            
            num3 = num1 / num2;
            // If num2 value of zero (0) is provided an "Arithmetic Exception" is generated

            cout << "-----------------" << endl;
            cout << "Result   : " << num3 << endl;

        } catch(const char * er) { // Catch String Errors
            cout << "-----------------" << endl;
            cout << "Error Generated. The Program was Interrupted" << endl;
            cout << er << endl;
        } catch(const int er) { // Catch Integer Errors
            cout << "-----------------" << endl;
            cout << "Error " << er << " Generated. The Program was Interrupted" << endl;
        } catch(runtime_error ex) { // Catch Runtime Exceptions
            cout << "-----------------" << endl;
            cout << "Error Generated. The Program was Interrupted" << endl;
            cout << ex.what() << endl;
        } catch(...) { // Catch All the Exceptions
            cout << "-----------------" << endl;
            cout << "Error Generated. The Program was Interrupted" << endl;
        }
        
        
    }
};

/*
int main(int argc, char** argv) {
    App1006::run();
    return 0;
}
*/