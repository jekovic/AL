#include <iostream>

using namespace std;

const int n = 4;
const int INF = 10000000;

int a[4][4] = {
	{0, 5, INF, 8},
	{7, 0, 9, INF},
	{2, INF, 0, 4},
	{INF, INF, 3, 0}
};

void floydWarshall() {

	int d[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			d[i][j] = a[i][j];
		}
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (d[i][k] + d[k][j] < d[i][j])
					d[i][j] = d[i][k] + d[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << d[i][j] << ' ';
		}
		cout << "\n";
	}
}

int main() {

	floydWarshall();

	return 0;
}