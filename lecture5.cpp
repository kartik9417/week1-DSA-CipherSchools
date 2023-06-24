#include <bits/stdc++.h>
using namespace std;

int rainwater(vector<int> &heights) {
    int n = heights.size();
    vector<int> lMax(n), rMax(n);
    rMax[n - 1] = heights[n - 1];

    lMax[0] = heights[0];
    for (int i = 1; i < n; i++) {
        lMax[i] = max(heights[i], lMax[i - 1]);
        rMax[n - 1 - i] = max(heights[n - 1 - i], rMax[n - i]);
    }

    int water = 0;
    for (int i = 1; i < n - 1; i++) {
        water += (min(lMax[i], rMax[i]) - heights[i]);
    }

    return water;
}

int main() {
    
    cout << "Program executed successfully." << endl;

    return 0;
}

