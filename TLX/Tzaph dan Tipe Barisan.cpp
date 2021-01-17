#include <iostream>
#include <vector>
#define p33k if(cin.peek() == '\n')break
#define pb push_back

using namespace std;

bool Equal(vector<int> arr, int n){
    int first = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] != first)
            return false;
    return true;
}

int Sorted(vector<int> arr, int n){
    if(n==1||n==0)return 1;
    if(arr[n-1]<arr[n-2])return 0;
    return Sorted(arr, n-1);
}

int ReverseSorted(vector<int> arr, int n){
    if(n==1||n==0)return 1;
    if(arr[n]>arr[n-1])return 0;
    return ReverseSorted(arr, n-1);
}

int main() {
    int test, i = 0;
    cin >> test;

    vector<int> datas;
    while(i<test){
        int a;
        cin >> a;
        int data = a;
        datas.pb(data);
        p33k;
    }

    if(Equal(datas, test)){
        cout << "EQUAL";
    }else if(Sorted(datas, test)){
        cout << "NONDECREASING";
    }else if(ReverseSorted(datas, test)){
        cout << "NONINCREASING";
    }else{
        cout << "NONE";
    }
    return 0;
}
