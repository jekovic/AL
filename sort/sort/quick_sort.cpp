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
//int num = 10;
//int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
//
//void QuickSort(int* array, int start, int end) {
//	if (start >= end) {	//원소가 1개인 경우
//		return;
//	}
//	
//	int key = start;	// 피봇
//	int i = start + 1;
//	int j = end;
//
//	while (i <= j) {	//엇갈릴 때까지 반복
//		while (array[i] <= array[key]) {	// 키 값보다 큰 값을 만날 때까지
//			i++;
//		}
//		while (array[j] >= array[key] && j > start) {	//키 값보다 작은 값을 만날 때까지
//			j--;
//		}
//		if (i > j) {	// 엇갈린 상태면
//			swap(array[key], array[j]);
//		}
//		else {
//			swap(array[i], array[j]);
//		}
//
//		QuickSort(array, start, j - 1);
//		QuickSort(array, j + 1, end);
//
//	}
//
//
//}
//
//int main()
//{
//	QuickSort(arr, 0, num - 1);
//
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}