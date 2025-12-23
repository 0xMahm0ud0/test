#include <iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i][i];
    }
    cout << "Sum of left diagonal elements: " << sum << endl;
}