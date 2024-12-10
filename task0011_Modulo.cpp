// Question from programming.in.th
// #0011 Modulo
//
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    const int N = 10, MOD_VAL = 42;
    bool mod_check[MOD_VAL] = {false};

    for(int i=0;i<N;i++){
        int tmp_inp, tmp_cal;
        cin>>tmp_inp;
        tmp_cal = tmp_inp%MOD_VAL;
        mod_check[tmp_cal] = true;
    }

    int mod_count = 0;
    for(int i=0;i<sizeof(mod_check);i++){
        if (mod_check[i])
            mod_count += 1;
    }

    cout<<mod_count<<endl;

    return 0;
}
