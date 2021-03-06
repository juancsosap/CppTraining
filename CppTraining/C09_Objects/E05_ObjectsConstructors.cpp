#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0905 {
public:
    class Count {
    private:
        string bank;
        string number;
        long balance;

    public:
        string getBank() { return bank; }
        string getNumber() { return number; }
        long getBalance() { return balance; }

        void deposit(long ammount) { if(ammount > 0) balance += ammount; }
        void withdraw(long ammount) { if(ammount > 0) balance -= ammount; }

        Count(string bank, string number, long initialBalance = 0) {
            Count::bank = bank;
            Count::number = number;
            Count::balance = initialBalance;
        }
        
        void display() {
            cout << this->bank << " : " << this->number << endl;
        }
    };

    static void run() {
        // Storage in the Heap Memory
        Count *count1 = new Count("BCI", "1234-5678", 100000);
        count1->display();

        cout << " Count 1 : " << count1->getBalance() << endl;

        count1->withdraw(50000);

        cout << " Count 1 : " << count1->getBalance() << endl;

        count1->deposit(20000);

        cout << " Count 1 : " << count1->getBalance() << endl;

        cout << "---------------------------------------------" << endl;

        // Storage in the Heap Memory
        Count *count2 = new Count("Scotiabank", "0987-7654");
        count2->display();

        cout << " Count 2 : " << count2->getBalance() << endl;

        count2->deposit(20000);

        cout << " Count 2 : " << count2->getBalance() << endl;
        
        cout << "---------------------------------------------" << endl;

        // Storage in the Stack Memory
        Count count3 = Count("Bice", "0102-3456");
        count3.display();

        cout << " Count 3 : " << count3.getBalance() << endl;

        count3.deposit(250000);

        cout << " Count 3 : " << count3.getBalance() << endl;
        
        cout << "---------------------------------------------" << endl;

        // Storage in the Stack Memory
        Count count4("Santander", "2222-33333");
        count4.display();

        cout << " Count 4 : " << count4.getBalance() << endl;

        count4.deposit(20000);

        cout << " Count 4 : " << count4.getBalance() << endl;
        
    }
};

/*
int main(int argc, char** argv) {
    App0905::run();
    return 0;
}
*/