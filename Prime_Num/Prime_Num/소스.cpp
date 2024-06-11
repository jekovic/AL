#include <iostream>
#include <cmath>

using namespace std;

const int n = 10000;
int arr[10001];

bool isPrimeNum(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

bool isPrime(int a) {
	int e = (int)sqrt(a);

	for (int i = 2; i <= e; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

void isPrimeSieve() {
	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) continue;
		for (int j = i + i; j <= n; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) cout << arr[i] << ' ';
	}
}

int main() {
	
	/*cout << isPrimeNum(10) << '\n';
	cout << isPrime(11);*/

	isPrimeSieve();


	return 0;
}