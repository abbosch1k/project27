#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;

    cout << "Enter numbers (negative to stop): ";

    while(true){
        cin >> num;

        if(num < 0)
            break;

        sum += num;
    }

    cout << "Total sum: " << sum << endl;

    return 0;
}
