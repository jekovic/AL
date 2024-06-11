///*
//	�ð� ���⵵
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
//	if (start >= end) {	//���Ұ� 1���� ���
//		return;
//	}
//	
//	int key = start;	// �Ǻ�
//	int i = start + 1;
//	int j = end;
//
//	while (i <= j) {	//������ ������ �ݺ�
//		while (array[i] <= array[key]) {	// Ű ������ ū ���� ���� ������
//			i++;
//		}
//		while (array[j] >= array[key] && j > start) {	//Ű ������ ���� ���� ���� ������
//			j--;
//		}
//		if (i > j) {	// ������ ���¸�
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