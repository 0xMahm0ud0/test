#include <iostream>
using namespace std;

int main(){
    int arr[10], sum = 0, count = 0, final_sum = 0;
    float x;
    for(int i = 0; i < 10; i++){
        cout << "Enter element [" << i << "] : ";
        cin >> arr[i];
        sum +=arr[i];
    }
    x = sum / 10;
    cout << "Average of elements of array is : " << x << endl;

    for (int i = 0; i < 10; i++){
        if (arr[i] >= x ){
            cout << arr[i] << " - element is greater than " << x << endl;
            final_sum += arr[i];
            count++;
        }
    }
    float final_avg = final_sum / count ;
    cout << "Final average  : " << final_avg << endl;

}