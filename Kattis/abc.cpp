#include <iostream>
using namespace std;

int main() {
    string urutan;
    int arr[3];
    int small, middle, big;
    int a, b, c;

    cin >> a >> b >> c;

    if(a < b && b < c){
        small = a;
        middle = b;
        big = c;
    } else if(a > b && b > c){
        small = c;
        middle = b;
        big = a;
    } else if(b < a && a < c){
        small = b;
        middle = a;
        big = c;
    } else if(c < a && a < b){
        small = c;
        middle = a;
        big = b;
    } else if(b < c && c < a){
        small = b;
        middle = c;
        big = a;
    } else{
        small = a;
        middle = c;
        big = b;
    }

    cin >> urutan;

    if(urutan == "CBA"){
        cout << big << " " << middle << " " << small;
    }
    else if(urutan == "BCA"){
        cout << middle << " " << big << " " << small;
    }
    else if(urutan == "ABC"){
        cout << small << " " << middle << " " << big;
    }
    else if(urutan == "BAC"){
        cout << middle << " " << small << " " << big;
    }
    else if(urutan == "ACB"){
        cout << small << " " << big << " " << middle;
    }
    else{
        cout << big << " " << small << " " << middle;
    }

}
