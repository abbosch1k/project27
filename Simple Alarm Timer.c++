#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){

    int seconds;

    cout << "Alarm after seconds: ";
    cin >> seconds;

    this_thread::sleep_for(chrono::seconds(seconds));

    cout << "ALARM! Time is up!\n";

    return 0;
}
