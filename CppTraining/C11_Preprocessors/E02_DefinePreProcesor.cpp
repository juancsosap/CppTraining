#include <cstdlib>
#include <iostream>

#define LANGUAGE "español"

#define PI 3.1415

#define PI2 (PI + PI)

#define WELCOME "\
██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗ \n\
██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝ \n\
██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗   \n\
██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝   \n\
╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗ \n\
 ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝ \n\
 "

#define BIENVENIDO "\
██████╗ ██╗███████╗███╗   ██╗██╗   ██╗███████╗███╗   ██╗██╗██████╗  ██████╗  \n\
██╔══██╗██║██╔════╝████╗  ██║██║   ██║██╔════╝████╗  ██║██║██╔══██╗██╔═══██╗ \n\
██████╔╝██║█████╗  ██╔██╗ ██║██║   ██║█████╗  ██╔██╗ ██║██║██║  ██║██║   ██║ \n\
██╔══██╗██║██╔══╝  ██║╚██╗██║╚██╗ ██╔╝██╔══╝  ██║╚██╗██║██║██║  ██║██║   ██║ \n\
██████╔╝██║███████╗██║ ╚████║ ╚████╔╝ ███████╗██║ ╚████║██║██████╔╝╚██████╔╝ \n\
╚═════╝ ╚═╝╚══════╝╚═╝  ╚═══╝  ╚═══╝  ╚══════╝╚═╝  ╚═══╝╚═╝╚═════╝  ╚═════╝  \n\
"

#define SALUDO ((LANGUAGE == "english") ? WELCOME : BIENVENIDO)

#define BANNER(lang) (((lang) == "english") ? WELCOME : BIENVENIDO)

#define ABS(number) (((number) >= 0) ? (number) : -(number))

// The define variables and methods are replaced in the code during the compilation

using namespace std;

class App1102 {
public:
    static void run() {
        cout << LANGUAGE << endl;
        cout << PI << endl;
        cout << PI2 << endl;
        cout << SALUDO << endl;
        
        cout << BANNER("english") << endl;
        
        cout << ABS(5) << endl;
        cout << ABS(-5) << endl;
        
    }
};

/*
int main(int argc, char** argv) {
    App1102::run();
    return 0;
}
*/