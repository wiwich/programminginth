// Question from programming.in.th
// #0015 Skocimis
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,cnt=0;
    cin>>a>>b>>c;

    while(cnt<101){
        if(b+1<c){
            int tmp = b+1;
            a = b;
            b = tmp;
            cnt += 1;
        }
        if(b+1>=c) break;
    }
    cout<<cnt<<endl;
    return 0;
}
