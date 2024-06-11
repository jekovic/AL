#include <iostream>
#include <vector>

using namespace std;

const int n = 15;

typedef struct node* treePointer;
typedef struct node {
	int data;
	treePointer left, right;
}node;

void preorder(treePointer ptr) {
	if (ptr) {
		cout << ptr->data << ' ';
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(treePointer ptr) {
	if (ptr) {
		inorder(ptr->left);
		cout << ptr->data << ' ';
		inorder(ptr->right);
	}
}

void postorder(treePointer ptr) {
	if (ptr) {
		postorder(ptr->left);
		postorder(ptr->right);
		cout << ptr->data << ' ';
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	node nodes[n + 1];

	for (int i = 1; i <= n; i++) {
		nodes[i].data = i;
		nodes[i].left = NULL;
		nodes[i].right = NULL;
	}

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			nodes[i / 2].left = &nodes[i];
		}
		else {
			nodes[i / 2].right = &nodes[i];
		}
	}

	preorder(&nodes[1]);
	cout << endl;

	inorder(&nodes[1]);
	cout << endl;

	postorder(&nodes[1]);
	cout << endl;

	return 0;
}