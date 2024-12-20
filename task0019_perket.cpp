// Question from programming.in.th
// #0019 Perket
//
//
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

//int diff( int x, int y ) { return x<y ? y-x : x-y; }

// Function to perform the recursive search for the minimum absolute difference
void findMinDifference(int idx, int sourness, int bitterness, const vector<pair<int, int> >& ingredients, int& minDiff) {
    if (idx == ingredients.size()) {
        // If no ingredients are selected, we skip this branch
        if (sourness == 1 && bitterness == 0) return;  // Avoid considering the empty subset
        // Update the minimum difference
        minDiff = min(minDiff, abs(sourness - bitterness));
        return;
    }

    // Case 1: Exclude the current ingredient
    findMinDifference(idx + 1, sourness, bitterness, ingredients, minDiff);

    // Case 2: Include the current ingredient
    findMinDifference(idx + 1, sourness * ingredients[idx].first, bitterness + ingredients[idx].second, ingredients, minDiff);
}

int main(){
    int N;
    cin >> N;

    vector<pair<int, int> > ingredients(N);

    // Read the ingredients' sourness and bitterness
    for (int i = 0; i < N; i++) {
        cin >> ingredients[i].first >> ingredients[i].second;  // first is sourness, second is bitterness
    }

    int minDiff = INT_MAX;  // Initialize the minimum difference as a large value

    // Start the recursive search from the first ingredient
    findMinDifference(0, 1, 0, ingredients, minDiff);

    // Output the minimum absolute difference
    cout << minDiff << endl;

    return 0;

}
