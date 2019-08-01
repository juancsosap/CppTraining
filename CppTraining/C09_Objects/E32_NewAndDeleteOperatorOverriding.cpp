#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0932 {
public:
    class StackBox {
    private:
        int index;
        int size;
        string *array;
        
    public:
        void preConstructor() {
            cout << "Creating Object" << endl;
        }
        
        StackBox(int size) {
            preConstructor();
            this->array = new string[size];
            this->size = size;
            this->index = -1;
        }
        
        void preDeconstructor() {
            cout << "Deleting Object" << endl;
        }
        
        ~StackBox() {
            preDeconstructor();
            //delete this->array;
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
        
        static void preNew() {
            cout << "Allocating Memory for the object" << endl;
        }
        
        void * operator new(size_t size) {
            StackBox::preNew();
            void *ptr = malloc(size);
            if(!ptr) throw bad_alloc();
            return ptr;
        }
        
        static void preDelete() {
            cout << "Freeing allocated Memory for the object" << endl;
        }
        
        void operator delete(void *ptr) {
            StackBox::preDelete();
            free(ptr);
        }
        
    };
    
    static void run() {
        string value;
        
        StackBox *sb = new StackBox(10);
        cout << "Height: " << sb->height() << endl << endl;
        
        value = "Juan Carlos";
        sb->put(value);
        cout << "Putting: " << value << endl;
        cout << "Height: " << sb->height() << endl << endl;
        
        value = sb->pop();
        cout << "Popping: " << value << endl;
        cout << "Height: " << sb->height() << endl << endl;
        
        delete sb;
    }
};

/*
int main(int argc, char** argv) {
    App0932::run();
    return 0;
}
*/