#include <iostream>
using namespace std;

int main() {
    int in;
    cin >> in;

    int res = 7 % in, i = 1;
    while(i<1e7){
        if(res == 0){
            cout << i;
            return 0;
        }
        res = (res * 10 + 7) % in;
        i++;
    }
    cout << -1;
}
