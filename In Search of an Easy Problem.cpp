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
    vector <int> data(t);
    while(t--){
        cin >> data[t];
    }
    for(int i: data){
        if(i == 1){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}
