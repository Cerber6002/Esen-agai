#include <iostream>
using namespace std;
int main() {
    float e = 1;
    int n = 0;

    while (1 + e != 1) {
        e /= 10;
        n++;
    }

    cout << "e:" << " " << e << endl;
    cout << "Cycles:" << " " << n << endl;

    return 0;
}