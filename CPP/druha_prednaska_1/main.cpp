#include <iostream>
using namespace std;

class Postava {
public:
    float m_zdravi;
    int m_pocetZlataku;
    int m_vahaNakladu;

    void setzdravi(float zdravi){
    m_zdravi = zdravi;
    }
    float getZdravi(){
        return m_zdravi;
    }
    float getPocetZlataku(){
        return m_pocetZlataku;
    }

    Postava(int pocetZlataku){
        m_zdravi = 100.0f;
        m_pocetZlataku = pocetZlataku;
        m_vahaNakladu = 0;
    }
};

int main() {
    Postava* frodo = new Postava (0);
    frodo->setzdravi(60.0);
    cout << "Zdravi Froda: " << frodo->getZdravi() << endl;
    cout << "Pocet zlataku: " << frodo->getPocetZlataku() << endl;
    delete frodo;
    return 0;
}
