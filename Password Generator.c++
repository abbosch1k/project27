#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int length;

    cout << "Enter password length: ";
    cin >> length;

    srand(time(0));

    cout << "Generated Password: ";

    for(int i = 0; i < length; i++) {
        cout << chars[rand() % chars.length()];
    }

    cout << endl;

    return 0;
}
