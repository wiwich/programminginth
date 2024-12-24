// Question from programming.in.th
// #0030 three-eleven
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string inp;

    cin>>inp;

    int r3 = 0, r11 = 0;

    for (int i=0;i<inp.length();i++){
        char tmp = inp[i] - '0'; //converts the character to its corresponding integer value.
        r3 = (r3 * 10 + tmp) % 3;
        r11 = (r11 * 10 + tmp) % 11;
    }

    cout<<r3<<" "<<r11<<endl;

    return 0;
}

