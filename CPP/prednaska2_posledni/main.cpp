#include <iostream>
using namespace std;
class Student{
    string m_jmeno;
    int m_rodneCislo;
    string m_bydliste;

public:
    Student(string jmeno, int rodneCislo, string bydliste){
        m_jmeno = jmeno;
        m_rodneCislo = rodneCislo;
        m_bydliste = bydliste;
    }

    Student(string jmeno, int rodneCislo){
        m_jmeno = jmeno;
        m_rodneCislo = rodneCislo;
        m_bydliste = "";
    }

    void setAdresa(int bydliste) {
        m_bydliste = bydliste;
    }
    string getBydliste(){
        return m_bydliste;
    }

    void printInfo(){
        cout << "Jmeno studenta: " << m_jmeno << endl;
        cout << "Rodne cislo studenta: " << m_rodneCislo << endl;
        cout << "Bydliste studenta: " << m_bydliste << endl;
    }

};
int main() {
    Student* dominik = new Student("Dominik", 7896823, "Ulice, mesto, PSC");
    dominik->printInfo();
    delete dominik;
    return 0;
}
