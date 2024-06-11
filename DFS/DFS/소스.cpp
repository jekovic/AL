#include <iostream>
#include <vector>

using namespace std;

const int n = 7;
int c[n];
vector<int> a[8];

void dfs(int x) {
	if (c[x]) return;
	c[x] = true;
	cout << x << endl;
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y);
	}
}

int main() {
	a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[3].push_back(6);
	a[6].push_back(3);

	a[3].push_back(7);
	a[3].push_back(3);
	
	dfs(1);

	return 0;
}