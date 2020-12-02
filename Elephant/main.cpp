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
    int in;
    cin >> in;

    int temp = 0;
    while(in != 0){
        if(in - 5 >= 0){
            in -= 5;
        }else if(in - 4 >= 0){
            in -= 4;
        }else if(in - 3 >= 0){
            in -= 3;
        }else if(in - 2 >= 0){
            in -= 2;
        }else if(in - 1 >= 0){
            in -= 1;
        }
        temp++;
    }
    cout << temp;
    return 0;
}
