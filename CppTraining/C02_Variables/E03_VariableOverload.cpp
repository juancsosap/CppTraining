#include <cstdlib>
#include <iostream>

using namespace std;

void app0203() {
    // Native Data Types
    
    // ----- Integers -----
    // short have 2 bytes in memory
    short short_min = -32768; // -32K
    short short_max = 32767;  // +32K
    cout << "short  " << short_min << " to " << short_max << endl;
    short short_overloaded = 50000;
    cout << "short  " << short_overloaded << endl;
    
    // int have 4 bytes in memory
    int int_min = -2147483648; // -2G
    int int_max = 2147483647;  // +2G
    cout << "int    " << int_min << " to " << int_max << endl;
    int int_overloaded = 4000000000;
    cout << "int    " << int_overloaded << endl;
        
    // long have 8 bytes in memory
    long long_min = -9223372036854775808; // -8E
    long long_max = 9223372036854775807;  // +8E
    cout << "long   " << long_min << " to " << long_max << endl;
    long long_overloaded = 10000000000000000000;
    cout << "long   " << long_overloaded << endl;
    
    // ----- Characters -----
    // char have 1 bytes in memory with values from ASCII Codes
    char char_overloaded = 300; // ASCII Code
    cout << "char   " << char_overloaded << endl;
}

/*
int main(int argc, char** argv) {
    app0203();
    return 0;
}
*/