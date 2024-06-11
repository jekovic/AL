#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, res = 0;
	cin >> n;

	res += n / 500;
	n %= 500;

	res += n / 100;
	n %= 100;

	res += n / 50;
	n %= 50;

	res += n / 10;
	n %= 10;

	cout << res;

	return 0;
}