#include <cstdlib>
#include <iostream>

using namespace std;

void app0304() {
    cout << "  Relational Operations  " << endl;
    cout << "-------------------------" << endl;
    
    int num1;
    cout << "number #1 : ";
    cin >> num1;
    
    int num2;
    cout << "number #2 : ";
    cin >> num2;
        
    cout << endl << "      Results       ";
    cout << endl << "--------------------";
    
    cout << endl << "NUM1 is >  NUM2 : " << (num1 > num2);
    cout << endl << "NUM1 is >= NUM2 : " << (num1 >= num2);
    cout << endl << "NUM1 is <  NUM2 : " << (num1 < num2);
    cout << endl << "NUM1 is >= NUM2 : " << (num1 <= num2);
    cout << endl << "NUM1 is == NUM2 : " << (num1 == num2);
    cout << endl << "NUM1 is != NUM2 : " << (num1 != num2);
}

/*
int main(int argc, char** argv) {
    app0304();
    return 0;
}
*/