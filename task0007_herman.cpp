// Question from programming.in.th
// #0007 Herman
//
//
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    double r,area_a,area_b;
    cin>>r;

    area_a = M_PI*r*r;
    area_b = 2*r*r;
    cout<<fixed<<setprecision(6)<<area_a<<endl;
    cout<<fixed<<setprecision(6)<<area_b<<endl;
    return 0;
}
