// Question from programming.in.th
// #0014 Great Common Divisor
//
//
#include<iostream>
using namespace std;
long long gcd(long long a, long long b);
int main()
{
    long long a = 0;
    long long b = 0;

    cin>>a>>b;

    long long result = gcd(a,b);

    cout<<result;

    return 0;
}
long long gcd(long long a, long long b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}
