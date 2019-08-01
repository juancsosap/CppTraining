#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App1203 {
public:
    template <typename T> class Box {
        private:
            T value;
        public:
            Box(T value) : value(value) {}
            T getValue() { return value; }
            void changeValue(T value) { this->value = value; }
    };
    
    template <typename K, typename V> class BiBox {
        private:
            K key;
            V value;
        public:
            BiBox(K key, V value) : key(key), value(value) {}
            K getKey() { return key; }
            V getValue() { return value; }
            void change(K key, V value) { this->key = key; this->value = value; }
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

        cout << "--------------------------" << endl;
        
        BiBox<string, string> box3("nombre", "Juan");
        BiBox<string, int> box4("edad", 36);
        cout << box3.getKey() << " : " << box3.getValue() << endl;
        cout << box4.getKey() << " : " << box4.getValue() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1203::run();
    return 0;
}
*/