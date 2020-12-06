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
    string str;
    cin >> str;
    int caps = 0, low = 0;
    for(auto i: str){
        if(islower(i))low++;
        else caps++;
    }
    if(low >= caps){
        for(auto &c: str){
            c = tolower(c);
        }
        cout << str;
    }else{
        for(auto &c: str){
            c = toupper(c);
        }
        cout << str;
    }
    return 0;
}
