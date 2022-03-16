#include <iostream>
using namespace std;

class Pocitadlo{
public:
    static int s_pocitadlo;

    Pocitadlo(){
        s_pocitadlo++;
    }

    ~Pocitadlo(){
        s_pocitadlo--;
    }
};

int Pocitadlo::s_pocitadlo = 0;

int main() {
    Pocitadlo* jedna = new Pocitadlo();
    cout << "Pocet instanci: " << jedna->s_pocitadlo << endl;
    delete jedna;
    return 0;
}
