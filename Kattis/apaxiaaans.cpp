#include <iostream>
using namespace std;

int main(){
    string kata;
    cin >> kata;
    char karakter = ' ';
    for(char i : kata){
        if (i != karakter)
            cout << i;
        karakter = i;
    }
    return 0;
}