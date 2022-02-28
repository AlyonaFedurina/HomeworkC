#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <ctime>
using namespace std;

int main() {
	vector<int> v;
	array<int, 1000000> a;
	deque<int> d;
	list<int> l;
	forward_list<int> f;

	for (int i = 0; i < 1000000; i++) {
		v.push_back(rand() % 20);
		a.at(i) = rand() % 20;
		d.push_back(rand() % 20);
		l.push_front(rand() % 20);
		f.push_front(rand() % 20);
	}

	std::sort(v.begin(), v.end());

	std::sort(a.begin(), a.end());

	std::sort(d.begin(), d.end());

	std::sort(l.begin(), l.end());

	std::sort(v.begin(), v.end());
	




}