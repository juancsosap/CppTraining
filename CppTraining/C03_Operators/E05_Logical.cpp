#include <cstdlib>
#include <iostream>

using namespace std;

void app0305() {
    cout << "  Logical Operations  " << endl;
    cout << "-------------------------" << endl;
    
    cout << endl << "     OR Operator     ";
    cout << endl << "---------------------";
    cout << endl << "false OR  false : " << (false || false);
    cout << endl << "false OR  true  : " << (false || true );
    cout << endl << "true  OR  false : " << (true  || false);
    cout << endl << "true  OR  true  : " << (true  || true );
    cout << endl;
    
    cout << endl << "    AND Operator     ";
    cout << endl << "---------------------";
    cout << endl << "false AND false : " << (false && false);
    cout << endl << "false AND true  : " << (false && true );
    cout << endl << "true  AND false : " << (true  && false);
    cout << endl << "true  AND true  : " << (true  && true );
    cout << endl;

    cout << endl << "    NOT Operator     ";
    cout << endl << "---------------------";
    cout << endl << "      NOT false : " << !false;
    cout << endl << "      NOT true  : " << !true;
    cout << endl;
}

/*
int main(int argc, char** argv) {
    app0305();
    return 0;
}
*/