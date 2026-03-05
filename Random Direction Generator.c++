#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    string directions[]={"North","South","East","West"};

    cout << "Direction: " << directions[rand()%4] << endl;

    return 0;
}
