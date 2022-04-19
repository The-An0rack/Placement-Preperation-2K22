#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;

	node(int val)
	{
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}
};

void preorder_traversal(struct node* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	preorder_traversal(root->left);
	preorder_traversal(root->right);
}

void inorder_traversal(struct node* root)
{
	if (root == NULL)
	{
		return;
	}
	inorder_traversal(root->left);
	cout << root->data << " ";
	inorder_traversal(root->right);
}

void postorder_traversal(struct node* root)
{
	if (root == NULL)
	{
		return;
	}
	postorder_traversal(root->left);
	postorder_traversal(root->right);
	cout << root->data << " ";
}


vector<vector<int>> levelorder_traversal(node* root)
{
	vector<vector<int>> res;
	queue<node*> q;
	if (root == NULL)
	{
		return res;
	}
	q.push(root);
	while (!q.isempty())
	{
		struct node =;
	}
}
int main()
{
	struct node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->right = new node(40);

	cout << "Preorder_traversal: ";
	preorder_traversal(root);
	cout << endl;

	cout << "Inorder_traversal: ";
	inorder_traversal(root);
	cout << endl;

	cout << "Postorder_traversal: ";
	postorder_traversal(root);
	cout << endl;

	vector<vector<int>> res = inorder_traversal(root);
	cout << "Levelorder_traversal: ";
	for (vector<int>vec : res)
	{
		for (int ele : vec)
		{
			cout << ele << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;

}