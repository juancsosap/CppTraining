#include <cstdlib>
#include <iostream>

using namespace std;

class App0208 {
public:
    static void run() {
        short short_var = 10;
        cout << "short  : " << sizeof(short_var)  << " Bytes - " << sizeof(short)  << " Bytes" << endl;

        int int_var = 10;
        cout << "int    : " << sizeof(int_var)    << " Bytes - " << sizeof(int)    << " Bytes" << endl;

        long long_var = 10;
        cout << "long   : " << sizeof(long_var)   << " Bytes - " << sizeof(long)   << " Bytes" << endl;

        char char_var = 'A';
        cout << "char   : " << sizeof(char_var)   << " Byte  - " << sizeof(char)   << " Byte"  << endl;

        bool bool_var = true;
        cout << "bool   : " << sizeof(bool_var)   << " Byte  - " << sizeof(bool)   << " Byte"  << endl;

        float float_var = 10.10;
        cout << "float  : " << sizeof(float_var)  << " Bytes - " << sizeof(float)  << " Bytes" << endl;

        double double_var = 10.10;
        cout << "double : " << sizeof(double_var) << " Bytes - " << sizeof(double) << " Bytes" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0208::run();
    return 0;
}
*/