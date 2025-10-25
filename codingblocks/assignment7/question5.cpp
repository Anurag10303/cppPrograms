#include <iostream>
#include <vector>
using namespace std;

int search(vector<long long>& nums) {
    long long start = 0, end = nums.size() - 1;

    while (start < end) {
        long long mid = start + (end - start) / 2;
        if (nums[mid] > nums[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return nums[start]; // This is the minimum
}

int main() {
    long long n;
    cin >> n;
    vector<long long> nums(n);

    for (long long i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << search(nums);
    return 0;
}