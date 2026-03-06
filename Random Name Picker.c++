#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    vector<string> names = {"Alex","John","Sam","Mike","Leo"};

    srand(time(0));

    cout << "Random name: " << names[rand()%names.size()];

}
