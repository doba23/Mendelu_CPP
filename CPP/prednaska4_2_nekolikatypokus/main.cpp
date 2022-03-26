#include <iostream>
using namespace std;

class NastaveniHry {
    static string s_jmenoHrace;
    static int s_pocetBodu;
public:
    static void setBody(int body){
        s_pocetBodu = body;
    }
    static int getBody(){
        return s_pocetBodu;
    }
    static string getJmeno(){
        return s_jmenoHrace;
    }
};

string NastaveniHry::s_jmenoHrace = "";
int NastaveniHry::s_pocetBodu = 0;

int main() {
    NastaveniHry* hrac = new NastaveniHry;
    NastaveniHry::setBody(4);
    cout << "Pocet bodu hrace: " << NastaveniHry::getBody() << endl;
    delete hrac;
    return 0;
}
