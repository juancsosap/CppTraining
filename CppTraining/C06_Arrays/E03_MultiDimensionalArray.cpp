#include <cstdlib>
#include <iostream>

using namespace std;

class App0603 {
public:
    static void run() {
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
};

/*
int main(int argc, char** argv) {
    App0603::run();
    return 0;
}
*/