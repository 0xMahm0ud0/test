#include <iostream>
using namespace std;

int main() {
    int temp[2][7];


    for (int city = 0; city < 2; city++) {
        cout << "Enter temperatures for City [" << city + 1 << "] : \n";
        for (int day = 0; day < 7; day++) {
            cin >> temp[city][day];
        }
    }


    cout << "\nTemperatures:\n";
    for (int city = 0; city < 2; city++) {
        cout << "City " << city + 1 << ": ";
        for (int day = 0; day < 7; day++) {
            cout << temp[city][day] << " ";
        }
        cout << endl;
    }

    int maxTemp = temp[0][0];
    int hottestCity = 0;

    for (int city = 0; city < 2; city++) {
        for (int day = 0; day < 7; day++) {
            if (temp[city][day] > maxTemp) {
                maxTemp = temp[city][day];  
                hottestCity = city + 1;
            }
        }
    }

    cout << "\nHottest temperature: " << maxTemp << endl;
    cout << "Hottest city is City " << hottestCity << endl;

    return 0;
}
