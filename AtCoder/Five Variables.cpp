//author: .rod.
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <chrono>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <unordered_map>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define mod ((ll)1e9+7)
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define for0(i,n) for(ll i=0; i<n; i++)
#define for1(i,n) for(ll i=1; i<n; i++)
#define for2(i,n) for(ll i=1; i<=n; i++)
#define each(x, a) for (auto& x: a)
#define lowercase(x) transform(all(x),x.begin(),::tolower)

#define F_OR(i, a, b, s) for (ll i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)

template<class A> void read(vt<A>& x);
template<class A, size_t S> void read(ar<A, S>& x);
template<class T> void read(T& x) {
    cin >> x;
}
void read(double& d) {
    string t;
    read(t);
    d=stod(t);
}
void read(long double& d) {
    string t;
    read(t);
    d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
    read(h);
    read(t...);
}
template<class A> void read(vt<A>& x) {
    each(a, x)
        read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
    each(a, x)
        read(a);
}
string to_string(char c) {
    return string(1, c);
}
string to_string(bool b) {
    return b?"true":"false";
}
string to_string(const char* s) {
    return string(s);
}
string to_string(string s) {
    return s;
}
string to_string(vt<bool> v) {
    string res;
    FOR(sz(v))
        res+=char('0'+v[i]);
    return res;
}
template<size_t S> string to_string(bitset<S> b) {
    string res;
    FOR(S)
        res+=char('0'+b[i]);
    return res;
}
template<class T> string to_string(T v) {
    bool f=true;
    string res;
    each(x, v) {
        if(!f)
            res+=' ';
        f=false;
        res+=to_string(x);
    }
    return res;
}
template<class A> void write(A x) {
    cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) {
    write(h);
    write(t...);
}
void print() {
    write("\n");
}
template<class H, class... T> void print(const H& h, const T&... t) {
    write(h);
    if(sizeof...(t))
        write(' ');
    print(t...);
}
void DBG() {
    cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
    cerr << to_string(h);
    if(sizeof...(t))
        cerr << ", ";
    DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

void solve() {
    vt<int>dt(5);
    read(dt);
    FOR(5){
        if(dt[i]==0){
            print(i+1);
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    cerr << "time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";
    return 0;
}
