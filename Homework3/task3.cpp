#include <stack>
#include <iostream>
#include <random>


void printstack(std::stack<int>& s) {
	auto a = s;
	while (!a.empty()) {
		std::cout << a.top() << std::endl;
		a.pop();
	}
}

int main() {
	std::stack<int> s;
	for (int i = 0; i < 10; i++) {
		s.push(std::rand() % 20);
	}

	printstack(s);
	std::cout << "#####" << std::endl;
	printstack(s);
}