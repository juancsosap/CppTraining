#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0929 {
public:
    class CyclicArray {
    public:
        int size;
        int *array;
        
        CyclicArray(int size) {
            this->array = new int[size];
            this->size = size;
        }
        
        int& operator[](int index) {
            return this->array[index % this->size];
        }
        
        void display() {
            cout << "{";
            for(int i=0; i<this->size; i++) {
                cout << this->array[i];
                if(i<(this->size-1))
                    cout << ", ";
            }
            cout << "}" << endl;
        }
        
    };
    
    static void run() {
        CyclicArray ca = CyclicArray(10);
        for(int i=0; i<15; i++) {
            ca[i] = i;
        }
        ca.display();
        for(int i=0; i<15; i++) {
            cout << ca[i] << " ";
        }
    }
};

/*
int main(int argc, char** argv) {
    App0929::run();
    return 0;
}
*/