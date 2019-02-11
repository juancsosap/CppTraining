#include <cstdlib>
#include <iostream>

using namespace std;

void app0508() {
    cout << "  Filter Even Numbers " << endl;
    cout << "----------------------" << endl;
    
    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }
}

/*
int main(int argc, char** argv) {
    app0508();
    return 0;
}
*/