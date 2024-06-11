//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//bool compare(pair<string, pair<int, int>>a, pair<string, pair<int, int>>b) {
//	if (a.second.first == b.second.first) {
//		return a.second.second > b.second.second;
//	}
//	else {
//		return a.second.first > b.second.first;
//	}
//}
//
//
//int main() {
//
//	/*vector<pair<int, string>> v;
//
//	v.push_back(pair<int, string>(90, "lee"));
//	v.push_back(pair<int, string>(20, "kim"));
//	v.push_back(pair<int, string>(50, "cha"));
//	v.push_back(pair<int, string>(60, "je"));
//	v.push_back(pair<int, string>(80, "park"));
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].first << " " << v[i].second << endl;
//	}*/
//
//	vector<pair<string, pair<int, int > > >v;
//
//	v.push_back(pair<string, pair<int, int>>("lee", pair<int, int >(80, 1999)));
//	v.push_back(pair<string, pair<int, int>>("kim", pair<int, int>(80, 2000)));
//	v.push_back(pair<string, pair<int, int>>("je", pair<int, int>(30, 2000)));
//	v.push_back(pair<string, pair<int, int>>("ki", pair<int, int>(70, 2001)));
//	v.push_back(pair<string, pair<int, int>>("an", pair<int, int>(99, 2002)));
//
//	sort(v.begin(), v.end(), compare);
//	
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].first << ' ' << v[i].second.first << ' ' << v[i].second.second << endl;
//	}
//
//	return 0;
//}