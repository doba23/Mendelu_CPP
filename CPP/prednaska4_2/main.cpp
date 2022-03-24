#include <iostream>
using namespace std;

class Game{
private:
    static string s_jmeno;
    static int s_pocetBodu;
public:
    static int getPocetBodu(){
        return s_pocetBodu;
    }
    static string getJmenoHrace(){
        return s_jmeno;
    }
    static void setBody(int pocetBodu){
        s_pocetBodu = pocetBodu;
    }
    static void setJmeno(string jmeno){
        s_jmeno = jmeno;
    }

};

int Game::s_pocetBodu = 0;
string Game::s_jmeno = "zadej jmeno";

int main() {
    Game* prvni = new Game;
    prvni->setBody(4);
    prvni->setJmeno("Dominik");
    cout << Game::getPocetBodu() << endl;
    cout << Game::getJmenoHrace() << endl;
    return 0;
}
