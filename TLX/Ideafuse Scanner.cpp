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
    string in, ideafuse = "ideafuse";
    cin >> in;

    for_each(in.begin(), in.end(), [](char & c){
        c = tolower(c);
    });

    int found = in.find(ideafuse);
    if(found != string::npos){
        cout << found+1;
    }else{
        cout << -1;
    }
    return 0;
}
