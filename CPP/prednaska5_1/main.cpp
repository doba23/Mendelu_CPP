#include <iostream>
using namespace std;

class Brneni {
    int m_bonusObrany;
public:
    Brneni(int bonus){
        m_bonusObrany = bonus;
    }
    int getBonusObrany(){
        return m_bonusObrany;
    }
};

class Rytir {
    int m_obrana;
public:
    Rytir(){
        m_obrana = 0;
    }
    void seberBrneni (Brneni* brneni){
        m_obrana += brneni->getBonusObrany();
    }

    void zahodBrneni(){
        m_obrana = 0;
    }

    int getObrana(){
        return m_obrana;
    }
};

int main() {
    Brneni* helma = new Brneni(15);
    Rytir* jan = new Rytir;
    jan->seberBrneni(helma);
    cout << "Rytir ma schopnost obrany:" << jan->getObrana() << endl;
    delete helma;
    delete jan;
    return 0;
}
