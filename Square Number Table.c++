#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter limit: ";
    cin >> n;

    for(int i=1;i<=n;i++)
        cout << i << " squared = " << i*i << endl;

    return 0;
}
