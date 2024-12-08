// Question from programming.in.th
// #0010 Trik
//
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    char ball_order[51];
    cin>>ball_order;

    int a = 1, b = 2, c = 3;

    for (int i=0;i<strlen(ball_order);i++){
        if (ball_order[i] == 'A')
            swap(a,b);
        else if (ball_order[i] == 'B')
            swap(b,c);
        else if (ball_order[i] == 'C')
            swap(a,c);
        //cout<<ball_order[i]<<a<<b<<c<<endl;
    }

    if (a == 1) cout<<1<<endl;
    else if (b == 1) cout<<2<<endl;
    else if (c == 1 ) cout<<3<<endl;

    return 0;
}
