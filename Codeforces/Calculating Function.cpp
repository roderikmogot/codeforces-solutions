#include <iostream>

using namespace std;
 
long long function(long long d){
    long long temp;
    if(d%2==0)temp=d/2;
    else temp= -((d/2)+1);
    return temp;
}
 
int main() {
    long long n;
    cin >> n;
    cout << function(n);
    return 0;
}
