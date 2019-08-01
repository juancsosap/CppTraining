#include <cstdlib>
#include <iostream>

using namespace std;

class App0304 {
public:
    static void run() {
        cout << "  Relational Operations  " << endl;
        cout << "-------------------------" << endl;

        int num1;
        cout << "number #1 : ";
        cin >> num1;

        int num2;
        cout << "number #2 : ";
        cin >> num2;

        cout << endl << "      Results       ";
        cout << endl << "--------------------";

        cout << endl << "NUM1 is >  NUM2 : " << (num1 > num2);
        cout << endl << "NUM1 is >= NUM2 : " << (num1 >= num2);
        cout << endl << "NUM1 is <  NUM2 : " << (num1 < num2);
        cout << endl << "NUM1 is >= NUM2 : " << (num1 <= num2);
        cout << endl << "NUM1 is == NUM2 : " << (num1 == num2);
        cout << endl << "NUM1 is != NUM2 : " << (num1 != num2);
    }
};

/*
int main(int argc, char** argv) {
    App0304::run();
    return 0;
}
*/