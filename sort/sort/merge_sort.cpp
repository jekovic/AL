///*
//	시간 복잡도
//	--> 	O(n*logN)
//*/
//
//#include <iostream>
//
//using namespace std;
//
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//const int num = 8;
//int sorted[8];
//
//void merge(int* a, int m, int middle, int n) {
//	int i = m;
//	int j = middle + 1;
//	int k = m;
//	
//	//작은 순서대로 배열에 삽입
//	while (i <= middle && j <= n) {
//		if (a[i] <= a[j]) {
//			sorted[k] = a[i];
//			i++;
//		}
//		else {
//			sorted[k] = a[j];
//			j++;
//		}
//		k++;
//	}
//
//	//남은 데이터 삽입
//	if (i > middle) {
//		for (int t = j; t <= n; t++) {
//			sorted[t] = a[t];
//			k++;
//		}
//	}
//	else {
//		for (int t = i; t <= middle; t++) {
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//	//정렬된 배열 삽입
//	for (int t = m; t <= n; t++) {
//		a[t] = sorted[t];
//	}
//}
//
//void mergesort(int* a, int m, int n)
//{
//	if (m < n) {
//		int mid = (m + n) / 2;
//		mergesort(a, m, mid);
//		mergesort(a, mid + 1, n);
//		merge(a, m, mid, n);
//	}
//}
//
//void printarr(int* a) {
//	for (int i = 0; i < num; i++) {
//		cout << a[i] << ' ';
//	}
//}
//
//int main()
//{
//	int a[num] = { 7,6,5,8, 3,5,9,1 };
//
//	mergesort(a, 0, num - 1);
//
//	printarr(a);
//
//	return 0;
//}