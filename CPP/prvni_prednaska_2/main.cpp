#include <iostream>
using namespace std;

class Student{
public:
    string m_jmeno;
    string m_rodneCislo;
    int m_semestr;

    void setSemestr(int novySemestr){
        if (novySemestr < 1) {
            cout << "Nemuze byt nulovy, nebo zaporny m_semestr" << endl;
            m_semestr = 1;
        }
        else {
            m_semestr = novySemestr;
        }
    }

    void setRodnecislo(string noveRodneCislo){
        if (noveRodneCislo.length() != 11){
            cout << "Nespravne zadene rodne cislo. Zadej rodne cislo ve formatu: 870229/8974" << endl;
        }
        else{
            cout << "Rodne cislo uzivatele: " << m_jmeno << " bylo spravne zadano. \n";
            m_rodneCislo = noveRodneCislo;
        }
    }

    int getSemestr(){
        return m_semestr;
    }

    string getRodneCislo(){
        return m_rodneCislo;
    }

    void printinfo(){
        cout << "vypsani vsech informaci o studentu metodou printinfo:" << endl;
        cout << "Jmeno: " << m_jmeno << endl;
        cout << "Rodne cislo: " << m_rodneCislo << endl;
        cout << "Semestr: " << m_semestr << endl;
    }
};

int main() {
    //nastaveni studenta Dominika
    Student* studentDominik = new Student();
    studentDominik->m_jmeno = "Dominik";
    studentDominik->setRodnecislo("123444/8745") ;
    studentDominik->m_semestr = 2;

    //vypasni studenta Dominika
    cout << "Jmeno studenta je: " << studentDominik->m_jmeno << "\n";
    cout << "Semestr studenta: " << studentDominik->m_semestr << endl;
    cout << endl;

    //printinfo o Dominiku
    studentDominik->printinfo();
    cout << endl;

    //nastaveni studenta Petra
    Student* studentPetr = new Student();
    studentPetr-> m_jmeno = "Petr";
    studentPetr->setRodnecislo("456194/7894");
    studentPetr->setSemestr(4); //nastaveni semestru pres setter
    cout << endl;

    //vzpsani studenta Petra
    cout << "Jmeno studenta je: " << studentPetr->m_jmeno << "\n";
    cout << "Semestr studenta: " << studentPetr->m_semestr << "\n";
    cout << "Rodne cislo: " << studentPetr->getRodneCislo() << endl;

    //test
    float prumernySemestr = (studentDominik->getSemestr() + studentPetr->getSemestr())/2.0;

    delete studentDominik;
    delete studentPetr;
    return 0;
}
