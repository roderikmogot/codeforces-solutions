// author: .rod.
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    string str;
    cin >> str;

    for(int i = 0; i < n; i++){
        if(str[i] == 'x'){
            if(x > 0)x--;
        }else{
            x++;
        }
    }

    cout << x;


    return 0;
}
