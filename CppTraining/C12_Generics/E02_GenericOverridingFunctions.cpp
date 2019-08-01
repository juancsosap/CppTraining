#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T> T add(T x, T y) { return x+y; }
template <typename T> T add(T x, T y, T z) { return x+y+z; }

// Explicit Specialization
template <> int add<int>(int x, int y) { return x+y; }
template <> double add<double>(double x, double y) { return x+y; }

class App1202 {
public:
    static void run() {
        cout << "Integer Addition ---> " << add(5, 5) << endl;
        cout << "Double Addition ----> " << add(5.0, 5.0) << endl;
        cout << "Integer Addition ---> " << add(5, 5, 5) << endl;
        cout << "Double Addition ----> " << add(5.0, 5.0, 5.0) << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1202::run();
    return 0;
}
*/