#include <iostream> 
using namespace std;

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        cout << "Enter Element [" << i << "] : ";
        cin >> arr[i];
    }

    for(int i = 0; i < 10;i++){
        for(int j = i + 1; j < 10; j++){
           if (arr[i] > arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
           }
        }
    }
    cout << "Ascending order :\n";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Descending order :\n";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}