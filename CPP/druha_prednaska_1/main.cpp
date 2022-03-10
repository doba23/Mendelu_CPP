#include <iostream>
using namespace std;

class Postava {
public: //dlouhodobbe uloyeni promenne
    float m_zdravi;
    int m_pocetZlataku;
    int m_vahaNakladu;

    void setzdravi(float zdravi){
        m_zdravi = zdravi;
    }

    void setVahaNakladu(int vaha_Nakladu){
        m_vahaNakladu = vaha_Nakladu;
    }
    float getZdravi(){
        return m_zdravi;
    }
    float getPocetZlataku(){
        return m_pocetZlataku;
    }
    float getVahaNakladu(){
        return m_vahaNakladu;
    }

    Postava(int pocetZlataku){
        m_pocetZlataku = pocetZlataku;
    }

    Postava(){
        m_zdravi = 100.0f;
        m_vahaNakladu = 0;
        m_pocetZlataku = 10;
    }

};

int main() {
    Postava* frodo = new Postava ();
    frodo->setzdravi(60.0);
    frodo->setVahaNakladu (100);
    cout << "Zdravi Froda: " << frodo->getZdravi() << endl;
    cout << "Pocet zlataku: " << frodo->getPocetZlataku() << endl;
    cout << "Vaha nakladu: " << frodo->getVahaNakladu() << endl;
    delete frodo;
    return 0;
}
