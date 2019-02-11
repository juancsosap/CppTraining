#include <cstdlib>
#include <iostream>

using namespace std;

void app0507() {
    cout << "     Search Number    " << endl;
    cout << "----------------------" << endl;
    
    int number;
    do {
        cout << "Number : ";
        cin >> number;
    } while(number < 0 || number > 100);
    
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            int result = i*j;
            if(result == number) {
                cout << i << "x" << j << " = " << result << endl;
                break;
            }
        }
    }
}

/*
int main(int argc, char** argv) {
    app0507();
    return 0;
}
*/