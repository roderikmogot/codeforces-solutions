#include <iostream>
using namespace std;

int main() {
    int l = 0, b = 0;
    cin >> l >> b;

    int temp = 0;
    if(l==b){
        cout << 1;
        return 0;
    }else{
        while(l <= b){
            l *= 3;
            b *= 2;
            temp += 1;
        }
        cout << temp;
    }
}
