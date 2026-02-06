#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};
    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int maxElem = -1;
    int minElem = -1;

    for (auto &it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElem = it.first;
        }

        if (it.second < minFreq) {
            minFreq = it.second;
            minElem = it.first;
        }
    }

    cout << "Highest frequency element: " << maxElem << endl;
    cout << "Lowest frequency element: " << minElem << endl;

    return 0;
}
