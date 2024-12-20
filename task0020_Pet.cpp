// Question from programming.in.th
// #0018 Reseto
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int score[5][4], max_score = INT_MIN, p = 0;
    for(int i=0;i<5;i++){
        int total_score = 0;
        for(int j=0;j<4;j++){
            cin>>score[i][j];
            total_score += score[i][j];
        }

        if(total_score > max_score){
            max_score = total_score;
            p = i+1;
        }

    }

    cout<<p<<" "<<max_score<<endl;


}
