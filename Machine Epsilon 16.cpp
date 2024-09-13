#include <iostream>
using namespace std;
int main() {
    float e = 1;
    int n = 0;

    while (1.0 + e != 1) {
        e /= 10;
        n++;
    }


    cout << "Cycles:" << " " << n << endl;

    return 0;
}