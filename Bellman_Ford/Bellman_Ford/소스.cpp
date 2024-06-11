#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAX 5
#define INF 987654321

using namespace std;

int Dist[MAX];
int N;

vector<pair<int, int>> Edge[MAX];


void Bellman() {

	Dist[1] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j != Edge[i].size(); j++) {
			int From = i;
			int To = Edge[i][j].first;
			int Cost = Edge[i][j].second;

			if (Dist[From] == INF) continue;
			if (Dist[To] > Dist[From] + Cost) Dist[To] = Dist[From] + Cost;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j != Edge[i].size(); j++) {
			int From = i;
			int To = Edge[i][j].first;
			int Cost = Edge[i][j].second;

			if (Dist[From] == INF) continue;
			if (Dist[To] > Dist[From] + Cost) {
				cout << "음의 싸이클 존재";
				return;
			}
		}
	}
	cout << "정상";
}

int main() {

	cin >> N;

	Edge[1].push_back({ 2, 3 });
	Edge[1].push_back({ 3, 1 });
	Edge[1].push_back({ 4, 5 });

	Edge[2].push_back({ 3, 3 });

	Edge[3].push_back({ 3, -4 });

	Edge[4].push_back({ 2, -4 });

	fill(Dist, Dist + MAX, INF);

	Bellman();

	return 0;
}