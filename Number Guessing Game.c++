#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess number between 1 and 100\n";

    while(true) {

        cin >> guess;

        if(guess > secret)
        cout << "Too high\n";

        else if(guess < secret)
        cout << "Too low\n";

        else {
            cout << "Correct!\n";
            break;
        }
    }

    return 0;
}
