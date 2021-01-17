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
    if(n %4 == 0 || n % 7 ==0 || n % 44 == 0|| n % 47 == 0 || n % 74 == 0
        || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0
            || n % 744 == 0 || n % 477 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0)
    {
        cout << "YES";
    }else{
        string str = to_string(n);
        str.erase(unique(str.begin(), str.end()), str.end());
        if(str == "47"){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }

    return 0;
}
