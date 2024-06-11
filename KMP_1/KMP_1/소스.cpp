#include <iostream>
#include <string>

using namespace std;

//ã�� ���ڿ� �ε��� ��ȯ
int findString(string parent, string pattern) {
	int parentSize = parent.size();
	int patternSize = pattern.size();

	for (int i = 0; i < parentSize - patternSize; i++) {
		bool finded = true;
		for (int j = 0; j < patternSize; j++) {
			if (parent[i + j] != pattern[j]) {
				finded = false;
				break;
			}
		}
		if (finded) return i;
	}
	return -1;
}


int main() {
	string  parent = "Hello Wolrd";
	string  pattern = "llo W";

	cout << findString(parent, pattern) << endl;
	cout << parent.find(pattern);
	return 0;
}