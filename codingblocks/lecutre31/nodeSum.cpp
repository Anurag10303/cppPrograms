#include <iostream>
using namespace std;
class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}
};
int sum = 0;
void NodeSum(TreeNode* root) {
	if (root == NULL) {
		return;
	}
	sum += root->val;
	NodeSum(root->left);
	NodeSum(root->right);
}
int main() {
	TreeNode* root = NULL;
	root = new TreeNode(10);
	root->left = new TreeNode(20);
	root->right = new TreeNode(30);
	root->left->left = new TreeNode(40);
	root->left->right = new TreeNode(50);
	root->right->right = new TreeNode(60);
	root->left->right->left = new TreeNode(70);
	NodeSum(root);
	cout << sum;
}