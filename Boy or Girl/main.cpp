#include <iostream>
#include <algorithm>
#include <string>

#define be in.begin(), in.end()

using namespace std;

int main() {
    string in;
    cin >> in;
    sort(be);
    in.erase(unique(be), in.end());
    in.length()%2==0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    return 0;
}
