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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for(char i: s){
        if(i=='A')a++;
        else d++;
    }
    if(a > d)cout << "Anton";
    else if(d > a)cout << "Danik";
    else cout << "Friendship";

    return 0;
}
