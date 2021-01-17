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
using namespace std;
 
 
int function(int d, int r, int f){
    vector <int> data;
    int res_1 = d+r*f;
    int res_2 = d*(r+f);
    int res_3 = d*r*f;
    int res_4 = (d+r)*f;
    int res_5 = d+r+f;
    int res_6 = d*r+f;
    data.push_back(res_1);
    data.push_back(res_2);
    data.push_back(res_3);
    data.push_back(res_4);
    data.push_back(res_5);
    data.push_back(res_6);
    int maaxx = *max_element(data.begin(),data.end());
    return maaxx;
}
 
int main() {
    int n, t, k;
    cin >> n;
    cin >> t;
    cin >> k;
    cout << function(n,t,k);
}
