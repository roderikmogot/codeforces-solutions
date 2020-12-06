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
    string in, hello = "hello";
    cin >> in;
    int j = 0, count = 0;
    for(char i : in){
        if(i == hello[j]){
            j++, count++;
        }
        if(count == hello.length()){
            break;
        }

    }
    hello.size() == count ? cout << "YES" : cout << "NO";
    return 0;
}
