#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#define ll long long
#define mes(x,y) memset(x,y,sizeof(x))
#define maxn 2147483648+30
using namespace std;

int main() {

    int test_Case;
    cin >> test_Case;
    for(int i = 0; i < test_Case; i++){
        string kata;
        cin >> kata;

        int size = kata.length();
        if(size > 10){
            int pembagi = size - 2;
            string str_pembagi = to_string(pembagi);
            string kata_akhir = kata[0] + str_pembagi + kata[size-1];
            cout << kata_akhir << endl;
        }else{
            cout << kata << endl;
        }
    }


    return 0;
}
