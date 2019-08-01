#include <cstdlib>
#include <iostream>

using namespace std;

class App0302 {
public:
    static void run() {
        int count = 10;

        cout << endl << "   Pre Increment    ";
        cout << endl << "--------------------";
        cout << endl << "Current Value : " << count;
        cout << endl << "New Value     : " << ++count;
        cout << endl << "Final Value   : " << count;
        cout << endl;

        cout << endl << "   Post Increment   ";
        cout << endl << "--------------------";
        cout << endl << "Current Value : " << count;
        cout << endl << "New Value     : " << count++;
        cout << endl << "Final Value   : " << count;
        cout << endl;

        cout << endl << "   Pre Decrement    ";
        cout << endl << "--------------------";
        cout << endl << "Current Value : " << count;
        cout << endl << "New Value     : " << --count;
        cout << endl << "Final Value   : " << count;
        cout << endl;

        cout << endl << "   Post Decrement   ";
        cout << endl << "--------------------";
        cout << endl << "Current Value : " << count;
        cout << endl << "New Value     : " << count--;
        cout << endl << "Final Value   : " << count;
        cout << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0302::run();
    return 0;
}
*/