#include <iostream>

using namespace std;

int main() {

    double celsius;

    cout << "Enter Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9/5) + 32;

    cout << "Fahrenheit: " << fahrenheit << endl;

}
