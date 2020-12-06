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
    string s, tran;
    cin >> s;
    cin >> tran;

    string m;
    for(int i = 0; i < s.size(); i++){
        m += s[s.size()-i-1];
    }

    if(tran == m){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
