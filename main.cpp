#include <iostream>

using namespace std;

int minuta = 0;
int zamieszkanie = 1;

int main() {
    while (zamieszkanie <= 1000) {
        minuta++;
        zamieszkanie = zamieszkanie * 2;
        cout << "minelo minute: " << minuta << endl;
    }
    return 0;
}
