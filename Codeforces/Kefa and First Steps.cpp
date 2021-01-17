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
    long t;
    cin >> t;

    vector<long long> data;
    while(true){
        long long c;
        cin >> c;
        data.push_back(c);
        if(cin.peek()=='\n')break;
    }

    int temp = 1, max_data = 1;
    for(long long i = 1; i < t;i++){
        if(data[i] >= data[i-1]){
            temp++;
            max_data = max(max_data, temp);
        }
        else temp = 1;
    }
    cout << max_data;
    return 0;
}
