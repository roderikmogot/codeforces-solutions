#include <iostream>
using namespace std;
int main() {

    int n,k,w;
    cin >> n >> k >> w;
    w++;
    int temp = 0;
    while(w--){
        temp += (n * w);
    }
    if(temp - k < 0){
        cout << 0;
    }else{
        cout << temp - k;
    }
    return 0;
}
