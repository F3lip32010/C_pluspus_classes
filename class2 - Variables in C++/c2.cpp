#include <iostream>

using namespace std;

int main()
{

    // TYPE NAME
    // TIPE NAME = VALUE;

    int lives = 0;          // 10, 25
    char letter = 'B';      //'B'
    double decimal = 5.2;   // 2.49999999
    float decimal2 = 5.2;   // 2.5
    bool alive = true;      // true or false
    string name = "Felipe"; //"Felipe"

    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Variables in C++" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "" << endl;

    cout << "Type the number of lives: ";
    cin >> lives;
    cout << "Type a letter: ";
    cin >> letter;
    cout << "Money: ";
    cin >> decimal;
    cout << "Type your name: ";
    cin >> name;

    // lives = 100;

    cout << "\nLives: " << lives << "\nLetter: " << letter << "\nMoney: " << decimal << "\nAlive: " << alive << "\nName: " << name << "\n";
    cout << "" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "" << endl;

    return 0;
}