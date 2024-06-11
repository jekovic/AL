#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 10

int n, isDegree[MAX];
vector<int> a[MAX];

void topologySort() {
	int res[MAX];
	queue<int> q;

	for (int i = 1; i <= n; i++) {
		if (isDegree[i] == 0)
			q.push(i);
	}

	for (int i = 1; i <= n; i++) {
		if (q.empty()) {
			cout << "사이클 발생";
			return;
		}
		int x = q.front();
		q.pop();
		res[i] = x;
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (--isDegree[y] == 0) {
				q.push(y);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << res[i] << '\n';
	}
}


int main() {
	n = 7;
	a[1].push_back(2);
	isDegree[2]++;
	a[1].push_back(5);
	isDegree[5]++;
	a[2].push_back(3);
	isDegree[3]++;
	a[3].push_back(4);
	isDegree[4]++;
	a[4].push_back(6);
	isDegree[6]++;
	a[5].push_back(6);
	isDegree[6]++;
	a[6].push_back(7);
	isDegree[7]++;

	topologySort();

	return 0;
}