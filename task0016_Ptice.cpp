// Question from programming.in.th
// #0016 Ptice
//
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Adrian  A, B, C, A, B, C, A, B, C, A, B, C, ..
    // Bruno B, A, B, C, B, A, B, C, B, A, B, C, ...
    // Goran C, C, A, A, B, B, C, C, A, A, B, B, ..

    int N=0;
    string answer;
    cin>>N;
    cin>>answer;

    string adrian = "ABC";
    string bruno = "BABC";
    string goran = "CCAABB";
    int adrian_score = 0, bruno_score = 0, goran_score = 0;
    for(int i=0;i<N;i++){
        /*cout<<"Round: "<<i+1<<" - "<<answer[i]<<endl;
        cout<<"Adrian: "<<adrian[i%3]<<endl;
        cout<<"Bruno: "<<bruno[i%3]<<endl;
        cout<<"Goran: "<<goran[i%3]<<endl;*/

        if(adrian[i%3] == answer[i]){
            adrian_score++;
        }
        if(bruno[i%4] == answer[i]){
            bruno_score++;
        }
        if(goran[i%6] == answer[i]){
            goran_score++;
        }
    }
    /*cout<<"Adrian: "<<adrian_score<<endl;
    cout<<"Bruno: "<<bruno_score<<endl;
    cout<<"Goran: "<<goran_score<<endl;*/

    int max_score = 0;
    if(adrian_score>max_score) max_score = adrian_score;
    if(bruno_score>max_score) max_score = bruno_score;
    if(goran_score>max_score) max_score = goran_score;
    cout<<max_score<<endl;

    if(adrian_score==max_score) cout<<"Adrian"<<endl;
    if(bruno_score==max_score) cout<<"Bruno"<<endl;
    if(goran_score==max_score) cout<<"Goran"<<endl;

    return 0;
}
