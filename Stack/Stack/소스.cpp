#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack<int> s;

	s.push(3);
	s.push(4);
	s.pop();
	s.push(5);
	s.push(6);
	s.pop();

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}

