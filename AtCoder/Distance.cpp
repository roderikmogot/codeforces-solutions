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
    long n, d;
    cin >> n >> d;
    int temp = 0;
    d = d*d;
    while(n--){
        long long x,y;
        cin >> x >> y;
        if(x*x + y*y <= d)temp++;
    }

    cout << temp;

    return 0;
}
