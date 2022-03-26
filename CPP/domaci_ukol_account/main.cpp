#include <iostream>
using namespace std;

class Account {
private:
    string m_ownerName;
    float m_withdrawalLimit;
    float m_balance;
    string m_log;
    bool m_transparentAccount;

public:
    // musim inicializovat vsechny atributy
    Account(string ownerName, float withdrawalLimit, bool transparentAccount) {
        m_ownerName = ownerName;
        m_withdrawalLimit = withdrawalLimit;
        m_balance = 0;
        m_log = "";

    }

    void depositMoney(float amount) {

        if (amount > 0) {
            m_balance += amount;
            string message = "Bylo ulozeno" + to_string(amount) + "Kc\n";
            logEvent(message);
        } else {
            string message = "Nelze ulozit" + to_string(amount) + "Kc\n";
            logError(message);
        }
    }


    void withdrawalMoney(float amount) {
        if ((amount < m_balance) and (amount < m_withdrawalLimit)) {
            string message = "Bylo vybrano" + to_string(amount) + "Kc\n";
            logEvent(message);
        } else {
            string message = "Nelze vybrat" + to_string(amount) + "Kc\n";
            logError(message);
        }
    }

    void getBalance(float) {
        return m_balance;
    }

    void chageWithdrawalLimit(float limit) {
        if (limit > 0) {
            m_withdrawalLimit = limit;
        }
    }

    void setMOwnerName(string owner) {
        m_ownerName = owner;
        string message = "Zmenen majitel na " + owner + "Kc";
        logError(message);
    }

private:
    logEvent (string description){
        m_log += "Udalost: " + description + "\n";
    }
    logError (string description){
        m_log += "Chyba: " + description + "\n";
    }

};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
