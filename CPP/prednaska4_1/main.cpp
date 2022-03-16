#include <iostream>
using namespace std;

class Pocitadlo{
private:
    static int s_pocitadlo;
public:
    Pocitadlo(){
        s_pocitadlo++;
    }
    ~Pocitadlo(){
        s_pocitadlo--;
    }
    static int getPocetInstanci(){
        return s_pocitadlo;
    }

};

int Pocitadlo::s_pocitadlo = 0;

int main() {

    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;

//    cout << "Pocet instanci: " << Pocitadlo::s_pocitadlo << endl;

    Pocitadlo* jedna = new Pocitadlo();
//    cout << "Pocet instanci: " << jedna->s_pocitadlo << endl;
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;


    Pocitadlo* dva = new Pocitadlo();
//    cout << "Pocet instanci: " << jedna->s_pocitadlo << endl;
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;


    Pocitadlo* tri = new Pocitadlo();
//    cout << "Pocet instanci: " << jedna->s_pocitadlo << endl;
    cout << "Pocet instanci: " << Pocitadlo::getPocetInstanci() << endl;

    delete jedna;
    delete dva;
    delete tri;
    return 0;
}
