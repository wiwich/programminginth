// Question from programming.in.th
// #0012 Okivira
//
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin>>word;

    int len = word.length();

    // Line 1
    for (int i = 0; i < len; i++) {
        if ((i + 1) % 3 == 0) cout << "..*.";
        else cout << "..#.";
    }
    cout<<"."<<endl;

    // Line 2
    for (int i = 0; i < len; i++) {
        if ((i + 1) % 3 == 0) cout << ".*.*";
        else cout << ".#.#";
    }
    cout<<"."<<endl;

    // Line 3
    for (int i = 0; i < len; i++) {
        if ((i + 1) % 3 == 0 ||i % 3 == 0 && i!=0) cout << "*.";
        else cout << "#.";

        cout << word[i] << ".";

        if(i==len-1){
            if((i+1)%3==0)
                cout << "*";
            else cout << "#";
        }
    }
    cout << endl;

    // Line 4:
    for (int i = 0; i < len; i++) {
        if ((i + 1) % 3 == 0) cout << ".*.*";
        else cout << ".#.#";
    }
    cout<<"."<<endl;

    // Line 5:
    for (int i = 0; i < len; i++) {
        if ((i + 1) % 3 == 0) cout << "..*.";
        else cout << "..#.";
    }
    cout<<"."<<endl;

    return 0;
}
