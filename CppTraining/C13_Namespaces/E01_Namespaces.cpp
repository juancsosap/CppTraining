#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

namespace One {

    void display(string msg) {
        cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
    }
    
}

namespace Two {

    void display(string msg) {
        cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
    }
    
}

namespace Three {
    
    class Displayer {
    public:
        static void display(string msg) {
            cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
        } 
    };
    
}

void display(string msg) {
    cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
}

class App1301 {
public:
    static void run() {
        display("Hola");
        One::display("Hola");
        Two::display("Hola");
        Three::Displayer::display("Hola");
    }
};

/*
int main(int argc, char** argv) {
    App1301::run();
    return 0;
}
*/