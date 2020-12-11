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
    string t;
    cin >> t;
    bool temp = 1;
    for(int i = 1; i < t.size(); i++){
        if(t[i] >= 'a' && t[i] <= 'z'){
            temp = 0;
            break;
        }
    }
    if(temp != 0) {
        for(char & i : t) {
            if (i >= 65 && i <= 90)i += 32;
            else i -= 32;
        }
    }
    cout << t;
    return 0;
}
