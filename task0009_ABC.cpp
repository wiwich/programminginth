// Question from programming.in.th
// #0009 ABC
//
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, tmp;
    cin>>a>>b>>c;

    if (b<a){
        tmp = b;
        b = a;
        a = tmp;
    }
    if (c<a){
        tmp = c;
        c = a;
        a = tmp;
    }
    if (c<b){
        tmp = c;
        c = b;
        b = tmp;
    }
    char word[4];
    cin>>word;
    for (int i=0;i<strlen(word);i++){

        if (word[i] == 'A')
            cout<<a<<" ";
        else if (word[i] == 'B')
            cout<<b<<" ";
        else
            cout<<c<<" ";
    }
    return 0;
}
