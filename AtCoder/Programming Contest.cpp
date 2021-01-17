#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<cctype>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> datas;
    while(n--){
        int data;
        cin >> data;
        int b = data;
        datas.push_back(b);
        if(cin.peek()=='\n')break;
    }

    int temp = 0;
    for(int i = 0; i < n; i++){
        temp += datas[i];
        if(temp < t)break;
    }
    if(temp > t)cout << "0";
    else cout << temp;
    return 0;
}
