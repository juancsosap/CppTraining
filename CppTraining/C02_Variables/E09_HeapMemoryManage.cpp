#include <cstdlib>
#include <iostream>

using namespace std;

void app0209() {
    // Heap memory allocation
    int *ptr1 = new int;
    
    *ptr1 =10;
    cout << "----------------------------" << endl;
    cout << "Address : " << ptr1 << endl;
    cout << "Value 1 : " << *ptr1 << endl;
    cout << "----------------------------" << endl;
    
    int *ptr2 = ptr1;
    cout << "----------------------------" << endl;
    cout << "Address : " << ptr2 << endl;
    cout << "Value 2 : " << *ptr2 << endl;
    cout << "----------------------------" << endl;
    
    *ptr2 = 20;
    cout << "----------------------------" << endl;
    cout << "Value 1 : " << *ptr1 << endl;
    cout << "Value 2 : " << *ptr2 << endl;
    cout << "----------------------------" << endl;
    
    delete ptr1;
    ptr1 = NULL;
    
    // Memory Dangling
    cout << "----------------------------" << endl;
    cout << "Address : " << ptr1 << endl;
    cout << "Address : " << ptr2 << endl;
    cout << "----------------------------" << endl;

    // Execution Error - double free or corruption 
    // delete ptr2;    
    
    int *ptr3 = new int;
    *ptr3 = 30;
    cout << "----------------------------" << endl;
    cout << "Address : " << ptr3 << endl;
    cout << "Value 3 : " << *ptr3 << endl;
    cout << "----------------------------" << endl;
    
    *ptr2 = 40;
    cout << "----------------------------" << endl;
    cout << "Value 2 : " << *ptr2 << endl;
    cout << "Value 3 : " << *ptr3 << endl;
    cout << "----------------------------" << endl;

    ptr2 = NULL;
    cout << "----------------------------" << endl;
    cout << "Address : " << ptr1 << endl;
    cout << "Address : " << ptr2 << endl;
    cout << "Address : " << ptr3 << endl;
    cout << "----------------------------" << endl;
}

/*
int main(int argc, char** argv) {
    app0209();
    return 0;
}
*/