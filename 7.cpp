#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        cout << "Enter element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    int mostElement = arr[0];
    int maxCount = 1;
    for (int i = 0; i < 10; i++){
        int count = 0;
        for(int j = 0; j < 10; j++){
            if (arr[i] == arr[j]){
                count++;

            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostElement = arr[i];
        }
    }
    cout << "Most occurring element: " << mostElement << endl;
    cout << "Number of occurrences: " << maxCount << endl;
}