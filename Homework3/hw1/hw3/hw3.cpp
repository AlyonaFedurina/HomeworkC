#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<size_t> v, v1, v2;
	for (int i = 1; i < 100; i++) {
		v.emplace_back(i);
		cout << (i) << " ";
		cout << (v.capacity()) << endl;
	}
	// Когда мы не резервируем capacity, емкость увеличивается с ростом количества элементов

	v1.reserve(100);
	for (int i = 1; i < 100; i++) {
		v1.emplace_back(i);
		cout << (i) << " ";
		cout << (v1.capacity()) << endl;
	}
	//Здесь емкость остается постоянной и равна зарезервированной

	v1.reserve(10000000000);
	for (int i = 1; i < 100; i++) {
		v1.emplace_back(i);
		cout << (i) << " ";
		cout << (v1.capacity()) << endl;
	}
	//При попытке резерва большого количества памяти выскакиевает exception
}