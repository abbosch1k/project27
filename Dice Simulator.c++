#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    cout << "Dice rolled: " << rand()%6 + 1 << endl;

}
