#include <iostream>
#include <vector>
#include <random>
using namespace std;

double getRandomFloatingPointBetween_progressive(double min, double max) {
	std::random_device rd; // uniformly-distributed integer random number generator
	std::mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	std::uniform_real_distribution<> dis(min, max);//uniform distribution between min and max
	return dis(gen);
}
double test_cases6() {
	double a = -1;
	for (int count = 0; count < 100; ++count)
	{
		a = getRandomFloatingPointBetween_progressive(-2, 2);
	}
	return a;
	}


int main()
{
	vector<double> v(10);
	for (int i = 0; i < 10; i++) {
		v.push_back(test_cases6());
	}

	sort(v.begin(), v.end(), [](double left, double right) {return abs(left) > abs(right); });

	for (int i = 10; i > 0; i--) {
		cout << v[i] << endl;
	}
}
