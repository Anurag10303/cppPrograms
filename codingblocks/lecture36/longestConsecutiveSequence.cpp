#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int , bool>startMap;
        for (int num : nums) {
            if (startMap.find(num - 1) == startMap.end()) {
                startMap[num] = true;
            } else {
                startMap[num] = false;
            }
            if (startMap.find(num + 1) != startMap.end()) {
                startMap[num + 1] = false;
            }
        }
        int maxsofar = 0;
        for (pair<int, bool>p : startMap) {
            int el = p.first;
            bool canstart = p.second;
            if (canstart) {
                int cnt = 0;
                while (startMap.find(el) != startMap.end()) {
                    cnt++;
                    el++;
                }
                maxsofar = max(maxsofar, cnt);
            }
        }
        return maxsofar;
    }
};
int main() {
    Solution s;
    vector<int>nums = {0, 1, 4, 5, 6, 11, 12, 13, 14};
    cout << s.longestConsecutive(nums) << endl;
}