#include <cstdlib>
#include <iostream>

using namespace std;

// For Global variables
// Null Values are Store
short short_var;
int int_var;
long long_var;
float float_var;
double double_var;
char char_var;
bool bool_var;

class App0205 {
public:
    static void run() {
        cout << "short   " << short_var << endl;
        cout << "int     " << int_var << endl;
        cout << "long    " << long_var << endl;
        cout << "float   " << float_var << endl;
        cout << "double  " << double_var << endl;
        cout << "char    " << char_var << endl;
        cout << "bool    " << bool_var << endl;    
    }
};

/*
int main(int argc, char** argv) {
    App0205::run();
    return 0;
}
*/