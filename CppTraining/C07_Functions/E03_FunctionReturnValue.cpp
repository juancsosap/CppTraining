#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

long factorial(int number) {
    long result = number;
    for(int i = 1; i < number; i++) {
        result *= i;
    }
    return result;
}

int requestInt(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while(number < 0);
    return number;
}

void app0703() {
    cout << "     Factorial      " << endl;
    cout << "--------------------" << endl;
    
    int number = requestInt("Number : ");
    
    long result = factorial(number);
    
    cout << "Result : " << result << endl;
}

/*
int main(int argc, char** argv) {
    app0703();
    return 0;
}
*/