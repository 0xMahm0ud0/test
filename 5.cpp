#include <iostream>
using namespace std;
int main(){
    float arr[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter element [" << i << "] : ";
        cin >> arr[i];
    }
    float max = arr[0];
    float secondmax = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            secondmax = max;
            max = arr[i];
        }else if (arr[i]> secondmax && max != arr[i]){
            secondmax = arr[i];
        }
    }
    cout << "Second largest element is : " << secondmax << endl;
}