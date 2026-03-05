#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    char letter = 'A' + rand() % 26;

    cout << "Random letter: " << letter << endl;

    return 0;
}
