#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

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

}

