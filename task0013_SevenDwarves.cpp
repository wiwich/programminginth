// Question from programming.in.th
// #0013 Seven Dwarves
//
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N=9;
    int num_arr[N], sum_arr=0;

    for(int i=0;i<N;i++){
        cin>>num_arr[i];
        sum_arr += num_arr[i];
    }
    //cout<<sum_arr<<endl;

    int find_no=0,a=0,b=0;
    find_no = sum_arr-100;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
             if(num_arr[i]+num_arr[j]==find_no && i!=j){
                a = num_arr[i];
                b = num_arr[j];
             }
        }
        if(a!=0 & b!=0) break;
    }

    //cout<<a<<"+"<<b<<endl;

    for(int i=0;i<N;i++){
        if(num_arr[i]==a || num_arr[i]==b)
            continue;
        else
            cout<<num_arr[i]<<endl;
    }

    return 0;
}
