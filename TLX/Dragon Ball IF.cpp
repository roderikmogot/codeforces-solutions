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
string str = "kamehameha";
vector<char> vowels{'i', 'o', 'u', 'e', 'a'};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m;
        cin >> m;
        for (unsigned int i = 0; i < str.size(); i++) {
            for (char c: vowels) {
                if (str.at(i) == c) {
                    for (int k = 1; k < m; k++) {
                        str.insert(i++, 1, c);
                    }
                }
            }
        }
        cout << str << endl;
        str.clear();
        str = "kamehameha";
    }

    return 0;
}
