#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char in[100];
    cin >> in;
    int len = strlen(in);
    for(int i = 0; i < len; i+=2){
        for(int j = 0; j < len-i-2; j+=2){
            if(in[j] > in[j+2])swap(in[j], in[j+2]);
        }
    }
    cout << in;
    return 0;
}
