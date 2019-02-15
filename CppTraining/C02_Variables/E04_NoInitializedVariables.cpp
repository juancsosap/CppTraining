#include <cstdlib>
#include <iostream>

using namespace std;

class App0204 {
public:
    static void run() {
        // Garbage Values are Store
        short short_var;
        cout << "short   " << short_var << endl;

        int int_var;
        cout << "int     " << int_var << endl;

        long long_var;
        cout << "long    " << long_var << endl;

        float float_var;
        cout << "float   " << float_var << endl;

        double double_var;
        cout << "double  " << double_var << endl;

        char char_var;
        cout << "char    " << char_var << endl;

        bool bool_var;
        cout << "bool    " << bool_var << endl;    
    }
};

/*
int main(int argc, char** argv) {
    App0204::run();
    return 0;
}
*/