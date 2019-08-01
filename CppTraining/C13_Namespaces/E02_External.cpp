#include <iostream>
#include <string>

using namespace std;

namespace One {

    inline void show(string msg) {
        cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
    }
    
}

namespace Two {

    inline void show(string msg) {
        cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
    }
    
}

namespace Three {
    
    class Shower {
    public:
        static void show(string msg) {
            cout << msg << " from " << __FILE__ << " line " << __LINE__ << endl;
        } 
    };
    
}