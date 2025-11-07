#include<iostream>
#include<vector>
using namespace std;
int knapsack(vector<int>weight, vector<int>price, int i, int w) {
	if (w == 0 || i == weight.size()) {
		return 0;
	}
	if (weight[i] > w) {
		return knapsack(weight, price, i + 1, w);
	}
	int x = price[i] + knapsack(weight, price, i + 1, w - weight[i]);
	int y = knapsack(weight, price, i + 1, w);
	return max(x, y);
}
int main() {
	int n = 5;
	int w = 4;
	vector<int>weight = {1, 2, 3, 2, 2};
	vector<int>price = {8, 4, 1, 5, 3};
	cout << knapsack(weight, price, 0, w);
}