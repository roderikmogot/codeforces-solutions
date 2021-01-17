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
    int t;
    cin >> t;
    long data[t];
    for(long & i : data)cin >> i;

    int temp = 1;
    for(int i = 1; i < t; i++){
        if(data[i] != data[i-1])temp++;
    }

    cout << temp;
    return 0;
}
