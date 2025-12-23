#include <iostream>
using namespace std;

int main() {
    int a[3][3], t[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "Transpose matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
