// Question from programming.in.th
// #0028 worldcup
//
//
#include <bits/stdc++.h>
using namespace std;

struct Team {
    string name;
    int score;
    int goalWin;
    int goalLoss;
};

bool compareTeams(Team &a, Team &b) {
    // compare by score in descending order
    if (a.score != b.score) {
        return a.score > b.score;
    }

    // if scores are equal, compare by goal difference (goalWin - goalLoss) in descending order
    int goalDiffA = a.goalWin - a.goalLoss;
    int goalDiffB = b.goalWin - b.goalLoss;
    if (goalDiffA != goalDiffB) {
        return goalDiffA > goalDiffB;
    }

    // if scores are equal, compare by goalWin in descending order
    return a.goalWin > b.goalWin;

}

int main() {
    int team_no = 4;
    vector<Team> teams(team_no);

    for (int i = 0; i < team_no; i++) {
        cin >> teams[i].name;
        teams[i].score = 0;
        teams[i].goalWin = 0;
        teams[i].goalLoss = 0;
    }

    int team_score[team_no][team_no];

    for (int i = 0; i < team_no; i++) {
        for (int j = 0; j < team_no; j++) {
            cin >> team_score[i][j];
        }
    }


    for (int i = 0; i < team_no; i++) {
        for (int j = 0; j < team_no; j++) {
            if (i == j) continue;
            if (team_score[i][j] > team_score[j][i]) {
                teams[i].score += 3;      // 3 points for a win
                teams[i].goalWin += team_score[i][j];
                teams[j].goalLoss += team_score[i][j];
            }
            else if (team_score[i][j] < team_score[j][i]) {
                teams[j].score += 3;      // 3 points for a win
                teams[j].goalWin += team_score[j][i];
                teams[i].goalLoss += team_score[j][i];
            }
            else { // draw
                teams[i].score += 1;      // 1 point for a draw
                teams[j].score += 1;
                teams[i].goalWin += team_score[i][j];
                teams[j].goalWin += team_score[j][i];
            }
        }
    }
    sort(teams.begin(), teams.end(), compareTeams);

    for(int i=0;i<team_no;i++){
        cout<<teams[i].name<<" "<<teams[i].score/2<<endl;
    }

    return 0;
}

