// Question from programming.in.th
// #0022 star
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c,result;

    cin>>a>>b>>c;


    if(b == "+"){
        if(a.size()>c.size()){
            result = a;
            result[a.size()-c.size()] = '1';
        }
        else if(a.size()<c.size()){
            result = c;
            result[c.size()-a.size()] = '1';
        }
        else{
            result = '2'+a.substr(1);
        }

    }
    else if(b == "*"){
        result = a + c.substr(1);
    }
    cout<<result<<endl;

    return 0;
}
