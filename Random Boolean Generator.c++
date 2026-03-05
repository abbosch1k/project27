#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    bool value = rand() % 2;

    cout << "Random boolean: " << value << endl;

    return 0;
}
