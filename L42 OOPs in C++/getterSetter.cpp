#include <iostream>
using namespace std;

class Hero {
    private :
    int health;

    public:
    char level;

    int getHealth() {         //getter
        return health;
    }

    char getLevel() {          // getter
        return level;
    }

    void setHealth(int h) {   //setter
        health = h;
    }

    void setLevel(char ch) {  //setter
        level = ch;
    }
};

int main() {
    Hero h1;

    // cout << h1.health;         // will throw error as health is private data member
    // cout << h1.level;

    h1.setHealth(1);
    h1.setLevel('A');

    cout << h1.getHealth() << " ";
    cout << h1.getLevel() << endl;

    h1.setHealth(2);
    h1.setLevel('B');

    cout << h1.getHealth() << " ";
    cout << h1.getLevel() << endl;

    return 0;
}