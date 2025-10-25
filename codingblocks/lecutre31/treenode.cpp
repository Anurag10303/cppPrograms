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
void preorder(TreeNode* root) {
	if (root == NULL) {
		cout << -1 << " ";
		return;
	}
	cout << root->val << " ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(TreeNode* root) {
	if (root == NULL) {
		cout << -1 << " ";
		return;
	}
	inorder(root->left);
	cout << root->val << " ";
	inorder(root->right);
}
void postorder(TreeNode* root) {
	if (root == NULL) {
		cout << -1 << " ";
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->val << " ";
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
	cout << "preorder" << " ";
	preorder(root);
	cout << endl;
	cout << "inorder" << " ";
	inorder(root);
	cout << endl;
	cout << "postorder" << " ";
	postorder(root);
}