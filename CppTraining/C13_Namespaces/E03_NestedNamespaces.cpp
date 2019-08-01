#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

namespace Level1 {

    inline void show(string msg) {
        cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
    }
    
    namespace Level2 {

        inline void show(string msg) {
            cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
        }

    }
    
}

namespace Level12 = Level1::Level2;

class App1303 {
public:
    static void run() {
        Level1::show("Hola");
        Level1::Level2::show("Hola");
        Level12::show("Hola");
    }
};

/*
int main(int argc, char** argv) {
    App1303::run();
    return 0;
}
*/