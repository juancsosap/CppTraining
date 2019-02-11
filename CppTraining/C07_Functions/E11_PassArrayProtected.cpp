#include <cstdlib>
#include <iostream>

using namespace std;

void printArray(int array[], int size) {
    cout << "{";
    for(int i=0; i<size; i++) {
        cout << array[i];
        if(i < size-1)
            cout << ", ";
    }
    cout << "}" << endl;
}

// Passing Array parameters (by reference)
void addToAll(int array[], int size, int amount) {
    for(int i=0; i<size; i++) {
        array[i] += amount;
    }
}

void mulToAll(const int array[], int size, int amount) {
    int result[size];
    for(int i=0; i<size; i++) {
        // array[i] *= amount; // Not valid ... compilation error;
        result[i] = array[i] * amount;
    }
    printArray(result, size);
}

void app0711() {
    int values[] = {1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(*values);
    
    printArray(values, size);
    
    addToAll(values, size, 10);
    
    printArray(values, size);
    
    mulToAll(values, size, 10);
}

/*
int main(int argc, char** argv) {
    app0711();
    return 0;
}
*/