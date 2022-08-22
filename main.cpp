#include <iostream>

using namespace std;


class Warrior {
public:
    Warrior() : _health(100) {}

    unsigned int getHealth() const { return _health; }

private:
    unsigned int _health;
};



class Wizard {
public:
    Wizard() : _health(100) {}

    unsigned int getHealth() const { return _health; }

private:
    unsigned int _health;
};


int main() {
    cout << "Welcome to Warriors vs. Wizards!" << endl;
    Warrior warr;
    cout << "I am a warrior and have " << warr.getHealth() << " HP" << endl;
    return 0;
}
