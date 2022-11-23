#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename T1, typename T2>
void merge(T1& c1, const T2& c2) {
	copy(c2.begin(), c2.end(), back_inserter(c1));
}

int main()
{
	vector<int> v1 = { 1, 2 ,3 };
	vector<int> v2 = { 4, 5, 6 };
	merge(v1, v2);
	
	list<int> l1 = { 5, 6, 7 };
	merge(l1, v2);

	cout << "merged vector" << endl;
	for (auto it : v1) {
		cout << it << endl;
	}
	cout << "merged list and vector" << endl;
	for (auto it : l1) {
		cout << it << endl;
	}
}