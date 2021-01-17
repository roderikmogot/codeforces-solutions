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
    char s,t;
    cin >> s;
    cin >> t;
    if(s == 'Y'){
        t = t-32;
        cout << t << endl;
    }else{
        cout << t;
    }
    return 0;
}
