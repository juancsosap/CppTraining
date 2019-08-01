#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0928 {
public:
    class Complex {
    public:
        double real;
        double imag;
        
        Complex(double real, double imag) {
            this->real = real;
            this->imag = imag;
        }
        
        Complex operator +(Complex onum) {
            return Complex(this->real + onum.real, this->imag + onum.imag);
        } 

        Complex operator -(Complex onum) {
            return Complex(this->real - onum.real, this->imag - onum.imag);
        } 

        Complex operator -() {
            return Complex(-this->real, -this->imag);
        } 

        Complex operator +(double num) {
            return Complex(this->real + num, this->imag);
        } 
        
        void operator +=(Complex onum) {
            this->real += onum.real;
            this->imag += onum.imag;
        } 

        void operator +=(double num) {
            this->real += num;
        } 
        
        void operator ++() { // Prefix Operator
            this->real++;
            this->imag++;
        } 

        void operator ++(int) { // Postfix Operator
            this->real++;
            this->imag++;
        } 

        void display() {
            cout << this->real << " + " << this->imag << "i" << endl;;
        }
    };
    
    static void run() {
        Complex num1 = Complex(10, 10), num2 = Complex(5, -7);
        cout << "NUM1 : ";
        num1.display();
        cout << "NUM2 : ";
        num2.display();
        
        cout << "NUM1 + NUM2 : ";
        Complex num3 = num1 + num2;
        num3.display();
        
        cout << "NUM1 - NUM2 : ";
        Complex num4 = num1 - num2;
        num4.display();
        
        cout << "NUM1 + 10 : ";
        Complex num5 = num1 + 10;
        num5.display();
        
        cout << "NUM1 + NUM2 + 10 : ";
        num5 += num2;
        num5.display();
        
        cout << "NUM1 + NUM2 + 25 : ";
        num5 += 15;
        num5.display();
        
        cout << "-NUM1 : ";
        num1 = -num1;
        num1.display();
        
        cout << "++NUM2 : ";
        ++num2;
        num2.display();
        
        cout << "NUM2++ : ";
        num2++;
        num2.display(); 

    }
};

/*
int main(int argc, char** argv) {
    App0928::run();
    return 0;
}
*/