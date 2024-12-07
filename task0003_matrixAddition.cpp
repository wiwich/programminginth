// Question from programming.in.th
// #0003 Matrix Addition
//
//
#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m;
    cin >> n;

    int m_arr[m][n], n_arr[m][n], result[m][n];

    //Enter values for the first matrix:
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m_arr[i][j];
        }
    }

    //Enter values for the second matrix:
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> n_arr[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = m_arr[i][j] + n_arr[i][j];
        }
    }

    // Output the resulting matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
