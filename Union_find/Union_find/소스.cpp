#include <iostream>
#include <vector>

using namespace std;

//	부모 찾기
int getParent(int* parent, int x) {
	if (parent[x] == x) {
		return x;
	}
	return parent[x] = getParent(parent, parent[x]);
}

// 두 부모 노드를 합치기
void unionParent(int* parent, int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) {
		parent[b] = a;
	}
	else parent[a] = b;
}

// 같은 집합에 속하는지 찾기
int findParent(int* parent, int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a == b) return 1;
	else return 0;
}

int main() {

	int parent[11];
	for (int i = 1; i < 11; i++) {
		parent[i] = i;
	}

	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);

	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);

	cout << "1, 5??  " << findParent(parent, 1, 5) << '\n';

	unionParent(parent, 4, 5);

	cout << "1, 5??  " << findParent(parent, 1, 5);

	return 0;
}