#include <iostream>
#include <vector>

using namespace std;

vector<int> makeTable(string pattern) {
	int sz = pattern.size();
	vector<int> table(sz, 0);
	int j = 0;
	for (int i = 1; i < sz; i++) {
		while (j > 0 && pattern[i] != pattern[j]) {
			j = table[j - 1];
		}
		if (pattern[i] == pattern[j]) {
			table[i] = ++j;
		}
	}
	return table;
}

void KMP(string parent, string pattern) {
	vector<int> table = makeTable(pattern);
	int parentSize = parent.size();
	int patternSize = pattern.size();
	int j = 0;
	for (int i = 0; i < parentSize; i++) {
		while (j > 0 && parent[i] != pattern[j]) {
			j = table[j - 1];
		}
		if (parent[i] == pattern[j]) {
			if (j == patternSize - 1) {
				cout << i - patternSize + 2 << endl;
				j = table[j];
			}
			else {
				j++;
			}
		}
	}
}


int main() {
	/*string a = "abacaaba";

	vector<int> t = makeTable(a);
	for (int i = 0; i != t.size(); i++) {
		cout << t[i] << ' ';
	}*/

	string parent = "ababacabacaabacaaba";;
	string a = "abacaaba";
	KMP(parent, a);
	cout << parent.find(a) + 1;
	return 0;
}