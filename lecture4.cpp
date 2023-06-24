#include <bits/stdc++.h>
using namespace std;


vector<int> spiralMatrix(vector<vector<int> > mat) {
    std::vector<int> result;

    int sx = 0, sy = 0;
    int ex = mat.size() - 1, ey = mat[0].size() - 1;

    int ctr = 0;
    while (sx <= ex && sy <= ey) {
        for (int j = sy; j <= ey; j++) {
            result.push_back(mat[sx][j]);
            ctr++;
        }
        sx++;

        for (int i = sx; i <= ex; i++) {
            result.push_back(mat[i][ey]);
            ctr++;
        }
        ey--;

        if (sx <= ex) {
            for (int j = ey; j >= sy; j--) {
                result.push_back(mat[ex][j]);
                ctr++;
            }
            ex--;
        }

        if (sy <= ey) {
            for (int i = ex; i >= sx; i--) {
                result.push_back(mat[i][sy]);
                ctr++;
            }
            sy++;
        }
    }

    return result;
}

int main() {

}

