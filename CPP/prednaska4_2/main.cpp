#include <iostream>
using namespace std;

class Game{
private:
    static string s_jmenoHrace;
    static int s_pocetBodu;
public:
    static string getPocetBodu(){
        return s_pocetBodu;
    }
    static string getJmenoHrace(){
        return s_jmenoHrace;
    }
    void setBody(int pocetBodu){ // set=nastav
        s_pocetBodu = pocetBodu;
    }
};


string Game::s_jmenoHrace = "zadej jmeno";
int Game::s_pocetBodu = 0;

int main() {

    return 0;
}
