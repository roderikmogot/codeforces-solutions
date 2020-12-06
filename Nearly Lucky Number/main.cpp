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

int main() {
    string n;
    cin >> n;

    int count = 0;
    for(char i : n){
        if(i == '4' || i == '7'){
            count++;
        }
    }

    string s = to_string(count);
    for(char i: s){
        if(i == '4' || i == '7')continue;
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
