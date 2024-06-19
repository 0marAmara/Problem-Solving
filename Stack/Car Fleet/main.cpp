#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed) {
        vector<pair<int, int>> cars;
        stack<double> st;
        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());
        for (auto car: cars) {
            double eta = double(target - car.first) / car.second;
            if (!st.empty() && st.top() >= eta) {
                continue;
            }
            st.push(eta);
        }
        return st.size();
    }

};

int main() {
    Solution s = Solution();
    int target = 10;
    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};
    cout << s.carFleet(target, position, speed) << endl;

    return 0;
}
