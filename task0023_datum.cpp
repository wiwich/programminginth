// Question from programming.in.th
// #0023 Datum
// Ref: https://www.geeksforgeeks.org/find-day-of-the-week-for-a-given-date/
//
#include <bits/stdc++.h>
using namespace std;

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}

int main(){
    int d, m;
    cin>>d>>m;

    int day = dayofweek(d, m, 2009);

    //DAY array starting from 0-6: {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}
    if(day==0) cout<<"Sunday"<<endl;
    else if(day==1) cout<<"Monday"<<endl;
    else if(day==2) cout<<"Tuesday"<<endl;
    else if(day==3) cout<<"Wednesday"<<endl;
    else if(day==4) cout<<"Thursday"<<endl;
    else if(day==5) cout<<"Friday"<<endl;
    else if(day==6) cout<<"Saturday"<<endl;

    return 0;
}
