#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> contacts;
    int choice;
    string name;

    while(true) {

        cout << "1 Add Contact\n2 Show Contacts\n3 Exit\n";
        cin >> choice;

        if(choice==1) {
            cout << "Enter name: ";
            cin >> name;
            contacts.push_back(name);
        }

        else if(choice==2) {
            for(string c : contacts)
            cout << c << endl;
        }

        else if(choice==3)
        break;
    }
}
