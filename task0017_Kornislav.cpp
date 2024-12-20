// Question from programming.in.th
// #0017 Kornislav
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int inp[4];

    for(int i=0;i<4;i++)
        cin>>inp[i];

    sort(inp , inp+4);
    cout<<inp[0]*inp[2];
}
