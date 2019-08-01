#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App1204 {
public:
    template <typename T = string> class Box {
        private:
            T value;
        public:
            Box(T value) : value(value) {}
            T getValue() { return value; }
            void changeValue(T value) { this->value = value; }
    };
    
    static void run() {
        Box<string> box1("Texto");
        cout << box1.getValue() << endl;
        box1.changeValue("Palabra");
        cout << box1.getValue() << endl;

        Box<int> box2(123);
        cout << box2.getValue() << endl;
        box2.changeValue(456);
        cout << box2.getValue() << endl;
        
        Box<> box3("Other");
        cout << box3.getValue() << endl;
        box3.changeValue("New");
        cout << box3.getValue() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1204::run();
    return 0;
}
*/