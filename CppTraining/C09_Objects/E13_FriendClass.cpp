#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Article {
private:
    string title;
    int year;
    
public:
    Article(string title, int year) {
        Article::title = title;
        Article::year = year;
    }
    
    // All the member of the friend class are friends
    friend class Displayer;
    friend class Shower;
};

class Displayer {
public:
    static void display(Article *article) {
        cout << "-------------------" << endl;
        cout << " Title : " << article->title << endl;
        cout << " Year  : " << article->year << endl;
        cout << "-------------------" << endl;
    }
};

class Shower {
public:
    void show(Article *article) {
        cout << article->title << " was publicated on " << article->year << endl;
    }
};

class Printer {
public:
    static void print(Article *article) {
        // No Access to private members
        // cout << article->title << " (" << article->year << ")" << endl;
    }
};

class App0913 {
public:
    static void run() {
        Article *first = new Article("My First Article", 2019);
        Displayer::display(first);
        Shower shower;
        shower.show(first);
        Printer::print(first);
    }
};

/*
int main(int argc, char** argv) {
    App0913::run();
    return 0;
}
*/