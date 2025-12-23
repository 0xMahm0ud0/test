#include <iostream>
using namespace std;

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "HCF = " << hcf(x, y);
    return 0;
}
