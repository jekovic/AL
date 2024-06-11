#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 101

using namespace std;

vector<int> a[MAX];
int d[MAX]; //점유체크
bool c[MAX]; //방문체크
int n = 3, m;

bool dfs(int x) {
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		//이미 처리한 노드는 더이상 보지 않기
		if (c[y]) continue;
		c[y] = true;
		//비어있거나 점유 노드에 더 들어갈 공간이 있는 경우
		if (d[y] == 0 || dfs(d[y])) {
			d[y] = x;
			return true;
		}
	}
	return false;
}

int main() {

	a[1].push_back(1);
	a[1].push_back(2);
	a[1].push_back(3);
	a[2].push_back(1);
	a[3].push_back(2);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		fill(c, c + MAX, false);
		if (dfs(i)) cnt++;
	}

	cout << cnt << endl;
	for (int i = 0; i < MAX; i++) {
		if (d[i] != 0) {
			cout << d[i] << " - > " << i << endl;
		}
	}


	return 0;
}