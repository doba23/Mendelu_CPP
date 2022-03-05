#include <iostream>
using namespace std;

class Student{
public:
    string jmeno;
    string rodneCislo;
    int semestr;

    void setSemestr(int novySemestr){
        if (novySemestr < 1) {
            cout << "Nemuze byt nulovy, nebo zaporny semestr" << endl;
            semestr = 1;
        }
        else {
            semestr = novySemestr;
        }
    }

    void setRodnecislo(string noveRodneCislo){
        if (noveRodneCislo.length() != 11){
            cout << "Nespravne zadene rodne cislo. Zadej rodne cislo ve formatu: 870229/8974" << endl;
        }
        else{
            noveRodneCislo = rodneCislo;
            cout << "Rodne cislo uzivatele: " << jmeno << " bylo spravne zadano. \n";
        }
    }
};

int main() {
    Student* studentDominik = new Student();
    studentDominik-> jmeno = "Dominik";
    studentDominik->rodneCislo = "12344/8745";
    studentDominik->semestr = 2;
    cout << "Jmeno studenta je: " << studentDominik->jmeno << "\n";
    cout << "Semestr studenta: " << studentDominik->semestr << endl;
    cout << endl;
    Student* studentPetr = new Student();
    studentPetr-> jmeno = "Petr";
    studentPetr->setRodnecislo("456194/7894");
    studentPetr->setSemestr(4); //nastaveni semestru pres setter

    cout << "Jmeno studenta je: " << studentPetr->jmeno << "\n";
    cout << "Semestr studenta: " << studentPetr->semestr << endl;


    delete studentDominik;
    delete studentPetr;
    return 0;
}
