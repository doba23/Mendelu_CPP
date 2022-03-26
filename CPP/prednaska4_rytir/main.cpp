#include <iostream>
using namespace std;

class Vypito{
    static string s_vypito;
public:
    static string getVypito(){
        return s_vypito;
    }
    static void setVypito(string vypito){
        s_vypito = vypito;
    }

};

string Vypito::s_vypito = "pred vypitim";

class Napoj{
    int m_bonusZdravi;
public:
    int getZdravi(){
        return m_bonusZdravi;
    }
    Napoj(int zdravi){
        m_bonusZdravi = zdravi;
    }
};

class Rytir{
    int m_zdravi;
public:
    Rytir(){
        m_zdravi = 50;
    }
    int getZdravi(){
        return m_zdravi;
    }
    void vypijNapoj(Napoj* napoj){
        m_zdravi += napoj->getZdravi();
        Vypito::setVypito("po vypiti");
    }
};

int main() {
    Napoj* fanta = new Napoj(12);
    Rytir* alfred = new Rytir;
    cout << "Zdravi rytire " << Vypito::getVypito() << " napoje: " << alfred->getZdravi() << endl;
    alfred->vypijNapoj(fanta);
    cout << "Zdravi rytire " << Vypito::getVypito() << " napoje: " << alfred->getZdravi() << endl;
    return 0;
}
