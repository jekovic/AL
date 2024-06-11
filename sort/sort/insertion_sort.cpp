///*
//	시간 복잡도
//	--> 	O(n^2)
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
//int main()
//{
//	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3,2, 9 };
//
//	for (int i = 0; i < 9; i++) {
//		int j = i;
//		while (array[j] > array[j + 1]) {
//			swap(array[j], array[j + 1]);
//			j--;
//		}
//	}
//		
//
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << " ";
//	}
//
//	return 0; 
//}