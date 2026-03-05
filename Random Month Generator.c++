#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string months[]={
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    cout << "Random month: " << months[rand()%12] << endl;

    return 0;
}
