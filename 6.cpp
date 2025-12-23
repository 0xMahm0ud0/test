#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        cout << "Element [" << i << "] : ";
        cin >> arr[i];
    }
    int smallset = arr[0];
    int largest = arr[0];
    int index;
    for(int i = 0; i < 10; i++){
        if (arr[i] <  smallset){
            smallset = arr[i];
            index = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    arr[index] = largest;
    cout << "\nNew array:\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

}