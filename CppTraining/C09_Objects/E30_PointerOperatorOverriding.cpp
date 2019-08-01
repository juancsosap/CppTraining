#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0930 {
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
        
        string *operator ->() {
            return &(this->array[this->index]);
        }
        
    };
    
    static void run() {
        string value;
        
        StackBox sb = StackBox(10);
        cout << "Height: " << sb.height() << endl << endl;
        
        value = "Juan Carlos";
        sb.put(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;
        sb->append(" Sosa Peña");
        
        value = "Jose Perez";
        sb.put(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;
        sb->assign("Luis Antonio");
        
        value = sb.pop();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = "Sarah Eliana";
        sb.put(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = "Jadash Amaryah";
        sb.put(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = sb.pop();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = sb.pop();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;

        value = sb.pop();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb.height() << endl << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0930::run();
    return 0;
}
*/