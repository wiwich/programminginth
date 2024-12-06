// Question from programming.in.th
// #0001 grading Problem
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long int min_val = INT_MAX;
    long long int max_val = INT_MIN;

    for(int i=0; i<n; i++){
        long long int val;
        cin>>val;

        if (val>max_val) max_val=val;
        if (val<min_val) min_val=val;
    }
    cout<<min_val<<endl<<max_val;

    return 0;
}
