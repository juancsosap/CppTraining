#include <cstdlib>
#include <iostream>

using namespace std;

void app0506() {
    cout << " Multiplication Table " << endl;
    cout << "----------------------" << endl;
    
    for(int i = 1; i <= 10; i++) {
        cout << endl << "### " << i << " ###" << endl;
        for(int j = 1; j <= 10; j++) {
            cout << i << "x" << j << " = " << i*j << endl;
        }
    }
}

/*
int main(int argc, char** argv) {
    app0506();
    return 0;
}
*/