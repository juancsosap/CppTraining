#include <cstdlib>
#include <iostream>

using namespace std;

class App1201 {
public:
    static int add(int x, int y) { return x+y; }
    static double add(double x, double y) { return x+y; }

    // Static function are not supported
    template <typename T> T del(T x, T y) { return x-y; }
    
    template <typename K, typename V> void display(K k, V v) {
        cout << k << ": " << v << endl;
    }
    
    template <typename T> void repeat(T value, int quantity) {
        for(int i = 0; i < quantity; i++)
            cout << value << endl;
    }
    
    static void run() {
        cout << "Integer Addition ---> " << add(5, 5) << endl;
        cout << "Double Addition ----> " << add(5.0, 5.0) << endl;
        
        App1201 app;
        
        cout << "Integer Subtraction > " << app.del(5, 3) << endl;
        cout << "Double Subtraction -> " << app.del(5.0, 3.0) << endl;
        
        cout << "------------------------------------------" << endl;
        
        app.display("name", "Juan");
        app.display("age", 36);
        app.display("active", true);
        
        cout << "------------------------------------------" << endl;
        
        app.repeat("********", 5);
        app.repeat(1, 3);
    }
};

/*
int main(int argc, char** argv) {
    App1201::run();
    return 0;
}
*/