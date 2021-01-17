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
    int n;
    cin >> n;

    int x_sum = 0, y_sum = 0, z_sum = 0;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    if(x_sum == 0 && y_sum == 0 && z_sum == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}
