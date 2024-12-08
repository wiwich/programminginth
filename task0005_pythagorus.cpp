// Question from programming.in.th
// #0005 Pythagorus
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    double x, y, z;

    cin>>x>>y;

    z = sqrt((x*x)+(y*y));

    cout<<fixed<<setprecision(6)<<z<<endl; //return 6 precision

    return 0;
}
