#include <cstdlib>
#include <iostream>

using namespace std;

class App0712 {
public:
    static void printArray(const int *beginPtr, const int *endPtr) {
        cout << "{";
        for(const int *ptr = beginPtr; ptr != endPtr; ptr++) {
            cout << *ptr;
            if(ptr < endPtr-1)
                cout << ", ";
        }
        cout << "}" << endl;
    }

    static void run() {
        int array[] = {1, 2, 3, 4, 5, 6, 7};
        printArray(array + 2, array + 7);
    }
};

/*
int main(int argc, char** argv) {
    App0712::run();
    return 0;
}
*/