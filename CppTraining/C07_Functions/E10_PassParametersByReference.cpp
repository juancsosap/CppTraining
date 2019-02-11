#include <cstdlib>
#include <iostream>

using namespace std;

// Passing parameters by value
void decrementValue(int value, int amount) {
    value -= amount;
}

// Passing parameters by reference
void incrementValue(int *value, int amount) {
    *value += amount;
}

// Passing Array parameters (by reference)
void changeValue(int array[], int amount) {
    array[0] = amount;
}

void app0710() {
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

/*
int main(int argc, char** argv) {
    app0710();
    return 0;
}
*/