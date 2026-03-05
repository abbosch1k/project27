#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;

    cout << "Enter numbers (0 to stop): ";

    while(true) {
        cin >> num;

        if(num == 0)
            break;

        count++;
    }

    cout << "Numbers entered: " << count << endl;

    return 0;
}
