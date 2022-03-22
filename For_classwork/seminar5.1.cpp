#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

double getRandomFloatingPointBetween_progressive(int min, int max) {
	random_device rd; // uniformly-distributed integer random number generator
	mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	uniform_real_distribution<> dis(min, max);//uniform distribution between min and max
	return dis(gen);
}

int test_cases6() {
	int R = -1;
	for (int count = 0; count < 100; ++count)
	{
		R = getRandomFloatingPointBetween_progressive(0, 3);
	}
	return R;

}

int main()
{

	vector<string> res = {"Monkey", "Banana", "Cherry", "7"};

	int a = test_cases6();
	int b = test_cases6();
	int c = test_cases6();
	cout << "Result: " << a << endl << "Result: " << b << endl << "Result: " << c << endl;
	if ((a == b) && (a == c) && (b==c) ) {
		cout << "YOU WIN!!!" << endl;
	}
	else {
		cout << "YOU LOSE" << endl;
	}
}

