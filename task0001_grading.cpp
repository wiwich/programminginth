//
// Question from programming.in.th
// #0001 Grading Problem
//
//
#include<iostream>
using namespace std;

int main(){
    int accum_score = 0;
    int mid_score = 0;
    int fin_score = 0;
    int total_score = 0;

    cin>>accum_score>>mid_score>>fin_score;

    total_score = accum_score+mid_score+fin_score;

    if (total_score>=80){
        cout<<"A";
    }
    else if (total_score>=75 && total_score<80){
        cout<<"B+";
    }
    else if (total_score>=70 && total_score<75){
        cout<<"B";
    }
    else if (total_score>=65 && total_score<70){
        cout<<"C+";
    }
    else if (total_score>=60 && total_score<65){
        cout<<"C";
    }
    else if (total_score>=55 && total_score<60){
        cout<<"D+";
    }
    else if (total_score>=50 && total_score<55){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
    return 0;
}
