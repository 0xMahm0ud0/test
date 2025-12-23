#include <iostream>
using namespace std;
int  max_element(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if (arr[i] >  max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The maximum element is: " << max_element(arr, 5) << endl;
    return 0;
}