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
    string s;
    cin >> s;

    stringstream f(s);
    int x = 0; f >> x;
    while(true){
        string data;
        string y = to_string(x+1);
        for(char i: y){
            if(data.find(i) == string::npos){
                data+=i;
            }else{
                break;
            }
        }
        if(data==y){
            cout << data << endl;
            break;
        }
        x++;
    }
    return 0;
}
