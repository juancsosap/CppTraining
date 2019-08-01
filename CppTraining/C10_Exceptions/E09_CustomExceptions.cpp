#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

class App1009 {
public:
    class NotDivisibleException : public exception {
        private:
            int value;
            int current;
            
        public:
            NotDivisibleException(int value, int current) {
                this->value = value;
                this->current = current;
            }
            
            int getCurrent() {
                return current;
            }
            
            int getValue() {
                return value;
            }
            
            const char* what() {
                return "Error 206 : Not Divisible by Number";
            }
    };
    
    static void run() {
        cout << "    Divisible    " << endl;
        cout << "-----------------" << endl;
        
        int num1, num2, num3;
        
        try {

            cout << "Divisor Number   : ";
            cin >> num1;
            // If not integer value is provided an "Arithmetic Exception" is generated

            cout << "Divisible Number : ";
            cin >> num2;
            // If not integer value is provided an "Arithmetic Exception" is generated

            if(num2 % num1 != 0) throw NotDivisibleException(num1, num2);
            
            cout << "-----------------" << endl;
            cout << "Divisible by Number " << num1 << " (" << num2 << ")";

        } catch(NotDivisibleException ex) {
            cout << "-----------------" << endl;
            cout << ex.what() << endl;
            cout << "Not Divisible by Number " << ex.getValue() << " (" << ex.getCurrent() << ")";

        }
        
    }
};

/*
int main(int argc, char** argv) {
    App1009::run();
    return 0;
}
*/