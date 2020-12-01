#include <iostream>

using namespace std;

int main() {
    int test;
    cin >> test;

    int store = 0;
    while(test--){
        int p, j, k;
        cin >> p >> j >> k;
        if(p+j+k >= 2)store++;
    }
    cout << store;
    return 0;
}
