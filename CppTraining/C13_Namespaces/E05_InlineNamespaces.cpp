#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

namespace Outer {
    
    namespace Inner1 {
        int variable = __LINE__;
    }

    namespace Inner2 {
        int variable = __LINE__;
    }

    inline namespace Inner3 {
        int variable = __LINE__;
    }
    
    namespace Inner3 {
        int variable2 = __LINE__;
    }
    
}


class App1305 {
public:
    static void run() {
        cout << Outer::Inner1::variable << endl;
        cout << Outer::Inner2::variable << endl;
        cout << Outer::variable << endl;
        cout << Outer::variable2 << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1305::run();
    return 0;
}
*/