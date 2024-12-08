// Question from programming.in.th
// #0004 Character Checker
//
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    char word[100000];
    cin>>word;

    int upper = 0;
    int lower = 0;
    for (int i=0; i<strlen(word); i++){
        if (isupper(word[i]))
            upper += 1;
        else if(islower(word[i]))
            lower += 1;
    }

    if (upper>0 && lower==0) cout<<"All Capital Letter"<<endl;
    else if (upper==0 && lower>0) cout<<"All Small Letter"<<endl;
    else cout<<"Mix"<<endl;

    return 0;
}
