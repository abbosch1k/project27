#include <iostream>
using namespace std;

int main() {

    int seconds;

    cout << "Enter seconds: ";
    cin >> seconds;

    cout << "Minutes: " << seconds / 60 << endl;
    cout << "Remaining seconds: " << seconds % 60 << endl;

    return 0;
}d
