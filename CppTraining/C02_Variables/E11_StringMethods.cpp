#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0211 {
public:
    static void run() {
        string text = "Tus ojos son luceros, tus labios, de terciopelo, y "
                      "un amor como el que siento, es imposible esconderlo. ";

        cout << "--------------------------" << "Original" << endl;
        cout << text << endl;

        text.append("Tus ojos son lucero (Anónimo)");
        cout << "--------------------------" << "text.append" << endl;
        cout << text << endl;

        int index = text.find("lucero", 30);
        cout << "--------------------------" << "text.find" << endl;
        cout << index << endl;

        string word = text.substr(index, 6);
        cout << "--------------------------" << "text.substr" << endl;
        cout << word << endl;

        text.replace(index, 6, "LUCEROS");
        cout << "--------------------------" << "text.replace" << endl;
        cout << text << endl;

        text.insert(index, "como grandes ");
        cout << "--------------------------" << "text.insert" << endl;
        cout << text << endl;

        char letter = text.at(4);
        cout << "--------------------------" << "text.at" << endl;
        cout << letter << endl;

        text.assign("New Text");
        cout << "--------------------------" << "text.assign" << endl;
        cout << text << endl;

        text.clear();
        cout << "--------------------------" << "text.clear" << endl;
        cout << text << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0211::run();
    return 0;
}
*/