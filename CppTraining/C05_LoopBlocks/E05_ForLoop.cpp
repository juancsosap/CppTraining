#include <cstdlib>
#include <iostream>

using namespace std;

void app0505() {
    cout << "     Factorial      " << endl;
    cout << "--------------------" << endl;
    
    int number;
    do {
        cout << "Number : ";
        cin >> number;
    } while(number < 0);
    
    long result = number;
    for(int i = 1; i < number; i++) {
        result *= i;
    }
    
    cout << "Result : " << result << endl;
}

/*
int main(int argc, char** argv) {
    app0505();
    return 0;
}
*/