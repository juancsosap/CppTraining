#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0931 {
public:
    class StackBox {
    private:
        int index;
        int size;
        string *array;
        
    public:
        StackBox(int size) {
            this->array = new string[size];
            this->size = size;
            this->index = -1;
        }
        
        void put(string element) {
            this->array[++this->index] = element;
        }
        
        string pop() {
            return this->array[this->index--];
        }
        
        int height() {
            return this->index + 1;
        }
        
        void operator ()(string item) {
            put(item);
        }
        
        string operator ()() {
            return pop();
        }
        
    };
    
    static void run() {
        string value;
        
        StackBox sb = StackBox(10);
        cout << "Height: " << sb.height() << endl << endl;
        
        value = "Juan Carlos";
        sb(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;
        
        value = "Jose Perez";
        sb(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;
        
        value = sb();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = "Sarah Eliana";
        sb(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = "Jadash Amaryah";
        sb(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = sb();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = sb();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = sb();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0931::run();
    return 0;
}
*/