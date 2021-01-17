#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <int> nilai;

void palindrome(int n, int rep, int rep_1){
    int temp, rev = 0;

    temp = n;
    while(n > 0)
    {
        rev=(rev*10) + (n%10);
        n=n/10;
    }
    if(temp == rev)
    {
        nilai.push_back(temp);
    }
}

int main() {
    int first = 1000, total, r;
    for(int i = 100; i < first; i++)
    {
        for(int j = 100; j < i; j++)
        {
            total = j * i;
            palindrome(total, j, i);
        }
    }
    cout << *max_element(nilai.begin(), nilai.end()) << endl;
    return 0;
}


