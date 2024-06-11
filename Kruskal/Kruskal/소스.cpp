#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getParent(vector<int> parent, int a) {
	if (parent[a] == a) {
		return a;
	}
	return parent[a] = getParent(parent, parent[a]);
}

void unionParent(vector<int> parent, int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

int findParent(vector<int> parent, int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);

	if (a == b) return 1;
	else return 0;
}

// 간선 클래스
class Edge {
public:
	int node[2];
	int distance;
	Edge(int a, int b, int d) {
		this->node[0] = a;
		this->node[1] = b;
		this->distance = d;
	}
	bool operator <(Edge& edge) {
		return this->distance < edge.distance;
	}
};

int main() {

	int m = 7; 
	int n = 11;

	vector<Edge> v;

	v.push_back(Edge(1, 7, 12));
	v.push_back(Edge(1, 4, 28));
	v.push_back(Edge(1, 2, 67));
	v.push_back(Edge(1, 5, 17));
	v.push_back(Edge(2, 4, 24));
	v.push_back(Edge(2, 5, 62));
	v.push_back(Edge(3, 5, 20));
	v.push_back(Edge(3, 6, 37));
	v.push_back(Edge(4, 7, 13));
	v.push_back(Edge(5, 6, 45));
	v.push_back(Edge(5, 7, 73));

	sort(v.begin(), v.end());

	vector<int> c;
	for (int i = 0; i < n; i++) {
		c.push_back(i);
	}

	int sum = 0;

	for (int i = 0; i < v.size(); i++) {
		if (!findParent(c, v[i].node[0] - 1, v[i].node[1] - 1)) {
			sum += v[i].distance;
			unionParent(c, v[i].node[0] - 1, v[i].node[1] - 1);
		}
	}

	cout << sum;

	return 0;
}