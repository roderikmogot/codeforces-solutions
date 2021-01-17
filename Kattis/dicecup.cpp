#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <unordered_map>

#define ll long long

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a==b){
        cout << a+1;
    }else{
        if(a>b){
            for(int i = b; i <= a; i++){
                cout << i+1 << endl;
            }
        }else{
            for(int i = a; i <= b; i++){
                cout << i+1 << endl;
            }
        }
    }
}