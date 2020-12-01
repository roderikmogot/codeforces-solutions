#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector <int> data;
    while(true){
        int cek;
        cin >> cek;
        int b = cek;
        data.push_back(b);
        if(cin.peek()=='\n')break;
    }
    int store = 0;
    for(int i = 0; i < data.size(); i++) {
        if (data[i] >= data[k-1] && data[i]>0) store++;
    }
    cout << store;
    return 0;
}
