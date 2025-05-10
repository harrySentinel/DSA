#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateRectangularMatrix(const vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> rotated(n, vector<int>(m));

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            rotated[j][m - 1 - i] = matrix[i][j];
        }
    }
    return rotated;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for(const auto& row : matrix) {
        for(int val : row)
            cout << val << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> rotated = rotateRectangularMatrix(mat);
    printMatrix(rotated);

    return 0;
}
