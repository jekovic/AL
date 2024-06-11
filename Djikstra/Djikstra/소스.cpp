#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int n = 6;
const int INF = 100000;

int a[6][6] = {
	{0, 2, 5, 1, INF, INF},
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0},
};

bool v[6];	//�湮�� ���
int d[6];	//�Ÿ�

//�ּ� �Ÿ� ���� ��ȯ -> ����Ž�� ��� 
int getSmall() {
	int min = INF;
	int idx = 0;
	for (int i = 0; i < n; i++) {
		if (d[i] < min && !v[i]) {
			min = d[i];
			idx = i;
		}
	}
	return idx;
}

//���ͽ�Ʈ�� ����
void dijkstra(int s) {
	for (int i = 0; i < n; i++) {
		d[i] = a[s][i];
	}
	v[s] = true;
	for (int i = 0; i < n - 2; i++) {
		int cur = getSmall();
		v[cur] = true;
		for (int j = 0; j < 6; j++ ) {
			if (!v[j]) {
				if (d[cur] + a[cur][j] < d[j])
					d[j] = d[cur] + a[cur][j];
			}
		}
	}
}

vector<pair<int, int>> arr[7];
int dis[7];
//���� ���� ���(�켱���� ť)
void dij(int s) {
	dis[s] = 0;
	priority_queue<pair<int, int>> pq; // Max-heap ���
	pq.push(make_pair(s, 0));

	while (!pq.empty()) {
		int cur = pq.top().first;
		int d = -pq.top().second;
		pq.pop();

		if (dis[cur] < d) continue;
		for (int i = 0; i < arr[cur].size(); i++) {
			int next = arr[cur][i].first;
			int nextDis = d + arr[cur][i].second;

			if (nextDis < dis[next]) {
				dis[next] = nextDis;
				pq.push(make_pair(next, -nextDis));
			}
		}

	}
}

int main() {

	/*dijkstra(0);

	for (int i = 0; i < n; i++) {
		cout << d[i] << ' ';
	}*/

	for (int i = 1; i <= n; i++) {
		dis[i] = INF;
	}

	arr[1].push_back(make_pair(2, 2));
	arr[1].push_back(make_pair(3, 5));
	arr[1].push_back(make_pair(4, 1));

	arr[2].push_back(make_pair(1, 2));
	arr[2].push_back(make_pair(3, 3));
	arr[2].push_back(make_pair(4, 2));

	arr[3].push_back(make_pair(1, 5));
	arr[3].push_back(make_pair(2, 3));
	arr[3].push_back(make_pair(4, 3));
	arr[3].push_back(make_pair(5, 1));
	arr[3].push_back(make_pair(6, 5));

	arr[4].push_back(make_pair(1, 1));
	arr[4].push_back(make_pair(2, 2));
	arr[4].push_back(make_pair(3, 3));
	arr[4].push_back(make_pair(5, 1));

	arr[5].push_back(make_pair(3, 1));
	arr[5].push_back(make_pair(4, 1));
	arr[5].push_back(make_pair(6, 2));


	arr[6].push_back(make_pair(3, 5));
	arr[6].push_back(make_pair(5, 2));

	dij(1);

	for (int i = 1; i <= n; i++) {
		cout << dis[i] << ' ';
	}


	return 0;
}
