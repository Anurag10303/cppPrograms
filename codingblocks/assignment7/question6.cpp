#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
	int start = 0, end = nums.size() - 1;
	int ans = -1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		// If found, return true
		if (nums[mid] == target) {
			ans = mid;
			return ans;
		}
		// Left half is sorted
		else if (nums[start] <= nums[mid]) {
			if (nums[start] <= target && target < nums[mid])
				end = mid - 1;
			else
				start = mid + 1;
		}
		// Right half is sorted
		else {
			if (nums[mid] < target && target <= nums[end])
				start = mid + 1;
			else
				end = mid - 1;
		}
	}

	return ans;
}

int main() {
	int n, target;
	cin >> n;
	vector<int> nums(n);

	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	cin >> target;

	cout << (search(nums, target));

	return 0;
}