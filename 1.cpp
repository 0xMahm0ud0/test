#include <iostream>
using namespace std;
int factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++)
        factorial *= i; 
    return factorial;
}
int main(){
    int  num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << factorial(num) << endl;
    return 0;
}