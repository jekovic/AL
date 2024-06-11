///*
//	�ð� ���⵵
//	--> O(n * log N)
//
//	heepify -> log N
//*/
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int num = 9;
//int arr[9] = { 7 , 6, 5, 8, 3, 5, 9, 1, 6 };
//
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	//�������� �ٲٱ�
//	for (int i = 1; i < num; i++) {
//		int c = i;
//		do {
//			int root = (c - 1) / 2;
//			if (arr[root] < arr[c]) {
//				swap(arr[root], arr[c]);
//			}
//			c = root;
//		} while (c != 0);
//	}
//
//	// ũ�⸦ �ٿ����鼭 ���� ����
//	for (int i = num - 1; i >= 0; i--) {
//		swap(arr[i], arr[0]);
//		int root = 0;
//		int c = 1;
//		do {
//			c = 2 * root + 1;
//			//�ڽ� �߿� �� ū ���� ã��
//			if (arr[c] < arr[c + 1] && c < i - 1) {
//				c++;
//			}
//			//��Ʈ���� �ڽ��� �� ũ�� ��ȯ
//			if (arr[root] < arr[c] && c < i) {
//				swap(arr[root], arr[c]);
//			}
//			root = c;
//		} while (c < i);
//	}
//
//	for (int i = 0; i < num; i++) {
//		cout << arr[i] << ' ';
//	}
//
//	return 0;
//}