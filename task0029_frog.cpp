// Question from programming.in.th
// #0029 frog
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;

    cin>>a>>b;

    if (a>b)
        cout<<2<<endl;
    else
        cout<<ceil(b/a)<<endl;

    return 0;
}
