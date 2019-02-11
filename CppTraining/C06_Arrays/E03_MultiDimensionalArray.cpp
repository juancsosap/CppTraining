#include <cstdlib>
#include <iostream>

using namespace std;

void app0603() {
    cout << "      Numbers       " << endl;
    cout << "--------------------" << endl;
    
    int quantity;
    cout << "Quantity : ";
    cin >> quantity;
    
    int numbers[2][quantity];
    
    int number = 1;
    int e = 0, o = 0;
    while((e < quantity) || (o < quantity)) {
        if((number % 2) == 0) {
            numbers[0][e++] = number;
        } else {
            numbers[1][o++] = number;
        }
        number++;
    }
    
    for(int i = 0; i < quantity; i++) {
        cout << "Sequence [" << i << "] : " << numbers[1][i] << " " << numbers[0][i] << endl;
    }
}

/*
int main(int argc, char** argv) {
    app0603();
    return 0;
}
*/