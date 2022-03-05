#include <iostream>
using namespace std;

class Student{
public:
    string jmeno;
    string rodneCislo;
    int semestr;
};

int main() {
    Student* studentDominik = new Student();
    studentDominik-> jmeno = "Dominik";
    studentDominik->rodneCislo = "123445/8745";
    studentDominik->semestr = 2;
    cout << "Jmeno studenta je: " << studentDominik->jmeno << "\n";
    cout << "Semestr studenta: " << studentDominik->semestr << endl;

    Student* studentPetr = new Student();
    studentPetr-> jmeno = "Petr";
    studentPetr-> semestr = 4;

    cout << "Jmeno studenta je: " << studentPetr->jmeno << "\n";
    cout << "Semestr studenta: " << studentPetr->semestr << endl;


    delete studentDominik;
    return 0;
}
