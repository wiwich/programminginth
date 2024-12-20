// Question from programming.in.th
// #0018 Reseto
//
//
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num<=1)
        return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)
            return false;
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;

    queue<int> prime;
    for(int i=2;i<=n;i++){
        if (isPrime(i)) {
            prime.push(i);
        }
    }

    bool arr_check[n+1]={false};
    queue<int> q;
    while(!prime.empty()){
        //cout<<prime.front()<<endl;
        int tmp_prime = prime.front();
        prime.pop();
        //cout<<"tmp_prime: "<<tmp_prime<<endl;
        for(int i=tmp_prime;i<=n;i+=tmp_prime){
            //cout<<"i: "<<i<<endl;
            if(arr_check[i]==false){
                q.push(i);
                arr_check[i]=true;
            }
        }
    }
    for(int i=0;!q.empty();i++){
        if(i+1==k)
            cout<<q.front()<<endl;
        //cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}
