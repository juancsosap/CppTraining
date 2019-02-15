#include <cstdlib>
#include <iostream>

using namespace std;

class App0202 {
public:
    static void run() {
        // Native Data Types

        // ----- Integers -----
        // short has 2 bytes in memory
        short short_min = -32768; // -32K
        short short_max = 32767;  // +32K
        cout << "short  " << short_min << " to " << short_max << endl;

        // int has 4 bytes in memory
        int int_min = -2147483648; // -2G
        int int_max = 2147483647;  // +2G
        cout << "int    " << int_min << " to " << int_max << endl;

        // long has 8 bytes in memory
        long long_min = -9223372036854775808; // -8E
        long long_max = 9223372036854775807;  // +8E
        cout << "long   " << long_min << " to " << long_max << endl;

        // ----- Characters -----
        // char has 1 bytes in memory with values from ASCII Codes
        char char_a = 'a';
        char char_A = 65; // ASCII Code
        cout << "char   a:" << char_a << "   A:" << char_A << endl;

        // ----- Float -----
        // float has 4 bytes of presition
        float float_num = 1234567890.123456789;
        cout << "float  " << float_num << endl;

        // double have 8 bytes of presition
        double double_num = 1234567890.123456789;
        cout << "double " << double_num << endl;

        // ----- Boolean -----
        // bool has 1 byte and only accept true and false values
        bool bool_true = true;
        bool bool_false = false;
        cout << "bool   true:" << bool_true << "   false:" << bool_false << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0202::run();
    return 0;
}
*/