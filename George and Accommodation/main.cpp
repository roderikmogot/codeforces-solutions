#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int temp = 0;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(b-a >= 2)temp++;
    }
    cout << temp;
    return 0;
}
