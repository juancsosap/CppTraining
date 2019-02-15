#include <cstdlib>
#include <iostream>

using namespace std;

class App0710 {
public:
    // Passing parameters by value
    static void decrementValue(int value, int amount) {
        value -= amount;
    }

    // Passing parameters by reference
    static void incrementValue(int *value, int amount) {
        *value += amount;
    }

    // Passing Array parameters (by reference)
    static void changeValue(int array[], int amount) {
        array[0] = amount;
    }

    static void run() {
        int value = 10;
        cout << "Initial Value : " << value << endl;

        decrementValue(value, 10);
        cout << "Middle Value  : " << value << endl;

        incrementValue(&value, 10);
        cout << "Final Value   : " << value << endl;

        cout << "--------------------------------" << endl;

        int array[] = {1, 2, 3, 4};
        cout << "Initial Array : " << array[0] << endl;

        changeValue(array, 10);
        cout << "Final Array   : " << array[0] << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0710::run();
    return 0;
}
*/