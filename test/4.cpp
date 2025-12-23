#include <iostream>
using namespace std;
void ch(char c){
    if (c >= 'a' && c <= 'z'){
        cout << "Lowercase letter" << endl;
    }
    else if (c >= 'A' && c <= 'Z'){
        cout << "Uppercase letter" << endl;
    }
    else{
        cout << "Maybe it's digital or something else" << endl;
    }
}
int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    ch(c);
}