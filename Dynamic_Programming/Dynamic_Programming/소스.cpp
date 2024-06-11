#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int f[100];

long long int fibo(int x) {
	if (x <= 2) {
		return 1;
	}
	if (f[x] != 0) return f[x];
	return f[x] = fibo(x - 1) + fibo(x - 2);
}


int main() {

	cout << fibo(40);


	return 0;
}