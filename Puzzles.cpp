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
    vector <int> data;
    cin >> t;
    while(true){
        int a;
        cin >> a;
        data.push_back(a);
        if(cin.peek()=='\n')break;
    }
    sort(data.begin(), data.end());
    for(int i: data)cout << i << " ";
    return 0;
}
