#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0804 {
public:
    struct s1 {
        int value1;
    };

    struct s2 {
        int value1;
        int value2;
    };

    struct s3 {
        int value1;
        int value2;
        int value3;
    };

    struct s4 {
        int value1;
        short value2;
        long value3;
    };

    struct s5 {
        char value1;
        long value2;
    };

    static void run() {
        cout << "s1 : " << sizeof(s1) << " => int(" << sizeof(int) << ")" << endl;
        cout << "s2 : " << sizeof(s2) << " => int(" << sizeof(int) << ") x 2" << endl;
        cout << "s3 : " << sizeof(s3) << " => int(" << sizeof(int) << ") x 3" << endl;

        cout << "s4 : " << sizeof(s4) << " => int(" << sizeof(int) << ") + " <<
                                             "short(" << sizeof(short) << ") + " <<
                                             "long(" << sizeof(long) << ")" << endl;

        cout << "s5 : " << sizeof(s5) << " => char(" << sizeof(char) << ") + " <<
                                             "long(" << sizeof(long) << ")" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0804::run();
    return 0;
}
*/