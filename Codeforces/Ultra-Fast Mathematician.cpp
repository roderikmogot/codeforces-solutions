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
    string t, k;
    cin >> t;
    cin >> k;
    string temp;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == k[i])temp+='0';
        else if(t[i] != k[i])temp+='1';
    }
    cout << temp;
    return 0;
}
