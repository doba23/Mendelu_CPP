#include <iostream>
using namespace std;

class Postava{
private:
    float m_zdravi;
    int m_pocetZlataku;
    float m_vahaNakladu;

public:

    Postava(){
        m_zdravi = 0.0;
        m_pocetZlataku = 0;
        m_vahaNakladu = 0.0;
    }

    Postava(int pocetZlataku){
        m_zdravi = 0.0f;
        m_pocetZlataku = pocetZlataku;
        m_vahaNakladu = 0.0;
    }

    Postava(float zdravi){
        m_zdravi = zdravi;
        m_pocetZlataku = 0;
        m_vahaNakladu = 0.0f;
    }

    Postava(int pocetZlataku, float zdravi){
        m_zdravi = zdravi;
        m_pocetZlataku = pocetZlataku;
        m_vahaNakladu = 0.0f;
    }

    Postava(float vahaNakladu, int pocetZlataku){
        m_zdravi = 0.0f;
        m_pocetZlataku = pocetZlataku;
        m_vahaNakladu = vahaNakladu;
    }

    Postava(float vahaNakladu, int pocetZlataku, float zdravi ){
        m_zdravi = zdravi;
        m_pocetZlataku = pocetZlataku;
        m_vahaNakladu = vahaNakladu;
    }

    void setZdravi(float zdravi){
        m_zdravi = zdravi;
    }

    float getZdravi(){
        return m_zdravi;
    }

    int getPocetZlataku(){
        return m_pocetZlataku;
    }

    int getVahaNakladu(){
        return m_vahaNakladu;
    }
};


int main() {
    Postava* frodo = new Postava(1.99, 1, 0.1);
    cout << frodo->getZdravi() << "\n";
    frodo->setZdravi(12.0);
    cout << frodo->getZdravi() << "\n";
    cout << frodo->getPocetZlataku() << "\n";
    cout << frodo->getVahaNakladu() << "\n";
    cout << "Hello, World!" << endl;
    return 0;
}
