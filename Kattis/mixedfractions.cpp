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

int main() {
    ll a, b;
    while(cin >> a >> b && a != 0 && b != 0){
        if(a < b){
            cout << "0 " << a << " / " << b << endl;
        }
        else if(a % b == 0){
            cout << a / b << " 0 / " << b << endl;
        }
        else{
            int temp = 0;
            while(a >= b){
                a -= b;
                temp += 1;
            }
            cout << temp << " " << a << " / " << b << endl;
        }
    }
}
