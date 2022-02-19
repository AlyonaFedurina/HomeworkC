#include <iostream>
#include <memory>

class BankCell {
public:
	BankCell() { 
		std::cout << "Create cell\n";
	}
	~BankCell() { 
		std::cout << "Destroy cell\n";
	}
};

class Human {
public:
	Human(std::shared_ptr<BankCell> p) {
		this->p_ = p;
		std::cout << "Create human\n";
	}
	~Human() {
		std::cout << "Destroy human\n";
	}
private:
	std::shared_ptr<BankCell> p_;
};

int main()
{
	BankCell* b = new BankCell;
	std::shared_ptr<BankCell> p(b);
	Human Aruna(p);
	Human Polina(p);
	return 0;
}

