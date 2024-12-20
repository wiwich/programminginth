// Question from programming.in.th
// #0021 Kemija
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    getline(cin, word);

    for(int i=0;i<word.size();i++){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
            cout<<word[i];
            i=i+2;
        }
        else{
            cout<<word[i];
        }
    }
    return 0;
}
