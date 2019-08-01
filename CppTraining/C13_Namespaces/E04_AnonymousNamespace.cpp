#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Local to each file
// Use the same scope that the external namespace
namespace {

    // could not have the same name as the print() in the external namespace
    void print1(string msg) {
        cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
    }
    
}

namespace External {
    
    namespace {
        
        void print(string msg) {
            cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
        }
        
    }
    
}

namespace {
    
    namespace Internal {
        
        void print(string msg) {
            cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
        }
        
    }
    
}

void print(string msg) {
    cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
}

class App1304 {
public:
    static void run() {
        print("Hola");
        print1("Hola");
        External::print("Hola");
        Internal::print("Hola");
    }
};

/*
int main(int argc, char** argv) {
    App1304::run();
    return 0;
}
*/