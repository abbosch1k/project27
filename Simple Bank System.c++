#include <iostream>
using namespace std;

int main() {

    double balance = 1000;
    int choice;
    double amount;

    while(true) {

        cout << "\n1 Deposit\n2 Withdraw\n3 Balance\n4 Exit\n";
        cin >> choice;

        if(choice == 1) {
            cout << "Amount: ";
            cin >> amount;
            balance += amount;
        }

        else if(choice == 2) {
            cout << "Amount: ";
            cin >> amount;

            if(amount <= balance)
            balance -= amount;

            else
            cout << "Not enough money\n";
        }

        else if(choice == 3) {
            cout << "Balance: " << balance << endl;
        }

        else if(choice == 4) {
            break;
        }
    }
}
