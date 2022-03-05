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
            cout << "Rodne cislo uzivatele: " << jmeno << " bylo spravne zadano. \n";
            rodneCislo = noveRodneCislo;
        }
    }

    int getSemestr(){
        return semestr;
    }

    string getRodneCislo(){
        return rodneCislo;
    }

    void printinfo(){
        cout << "vypsani vsech informaci o studentu metodou printinfo:" << endl;
        cout << "Jmeno: " << jmeno << endl;
        cout << "Rodne cislo: " << rodneCislo << endl;
        cout << "Semestr: " << semestr << endl;
    }
};

int main() {
    //nastaveni studenta Dominika
    Student* studentDominik = new Student();
    studentDominik->jmeno = "Dominik";
    studentDominik->setRodnecislo("123444/8745") ;
    studentDominik->semestr = 2;

    //vypasni studenta Dominika
    cout << "Jmeno studenta je: " << studentDominik->jmeno << "\n";
    cout << "Semestr studenta: " << studentDominik->semestr << endl;
    cout << endl;

    //printinfo o Dominiku
    studentDominik->printinfo();
    cout << endl;

    //nastaveni studenta Petra
    Student* studentPetr = new Student();
    studentPetr-> jmeno = "Petr";
    studentPetr->setRodnecislo("456194/7894");
    studentPetr->setSemestr(4); //nastaveni semestru pres setter
    cout << endl;

    //vzpsani studenta Petra
    cout << "Jmeno studenta je: " << studentPetr->jmeno << "\n";
    cout << "Semestr studenta: " << studentPetr->semestr << "\n";
    cout << "Rodne cislo: " << studentPetr->getRodneCislo() << endl;

    //test
    float prumernySemestr = (studentDominik->getSemestr() + studentPetr->getSemestr())/2.0;

    delete studentDominik;
    delete studentPetr;
    return 0;
}
