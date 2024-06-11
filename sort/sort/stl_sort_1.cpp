//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void printarr(int* a) {
//	for (int i = 0; i < 10; i++) {
//		cout << a[i] << ' ';
//	}
//
//}
//
//bool compare(int a, int b) {
//	return a > b;
//}
////
////int main() {
////
////	int arr[10] = { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };
////
////	//sort(arr, arr + 10);
////	sort(arr, arr + 10, compare);
////
////	printarr(arr);
////
////	return 0;
////}
//
//class Student {
//public:
//	string name;
//	int score;
//
//	Student(string n, int k) {
//		this->name = n;
//		this->score = k;
//	}
//	bool operator < (Student& s) {
//		return this->score < s.score;
//	}
//};
//
//int main() {
//
//	Student student[]{
//		Student("kim", 100),
//		Student("lee", 30),
//		Student("Je", 99),
//		Student("ki", 76),
//		Student("ho", 57)
//	};
//
//	sort(student, student + 5);
//	
//	for (int i = 0; i < 5; i++) {
//		cout << student[i].name << ' ' << student[i].score << endl;
//	}
//
//	return 0;
//}