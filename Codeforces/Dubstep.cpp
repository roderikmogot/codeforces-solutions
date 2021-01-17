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
 
bool BothAreSpaces(char lhs, char rhs) { return (lhs == rhs) && (lhs == ' '); }
 
int main() {
    string t, wub = "WUB";
    bool space = true;
    cin >> t;
    string store;
    string check;
    for(int i = 0; i < t.size(); i++){
        if(t[i]=='W' && t[i+1]=='U' && t[i+2]=='B'){
            i = i + 2;
            if(space == false)store+= ' ';
        }else{
            space = false;
            store += t[i];
        }
 
    }
    string::iterator new_end = unique(store.begin(), store.end(), BothAreSpaces);
    store.erase(new_end, store.end());
 
    cout << store;
    return 0;
}
