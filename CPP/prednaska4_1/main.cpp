#include <iostream>
using namespace std;

class Pocitadlo{
    static int s_pocitadlo;
    string m_jmeno;
public:
    Pocitadlo(){
        s_pocitadlo ++;
        m_jmeno = "Vychozi jmeno"
    }
    ~Pocitadlo(){
        s_pocitadlo --;
    }
    static int getPocetInstanci(){
        return s_pocitadlo;
    }
};
    int Pocitadlo::s_pocitadlo = 0;

int main() {
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;
    Pocitadlo* jedna = new Pocitadlo();
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;
    Pocitadlo* dva = new Pocitadlo();
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;
    delete dva;
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;
    Pocitadlo* tri = new Pocitadlo();
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;
    delete jedna;
    delete tri;
    return 0;
}
