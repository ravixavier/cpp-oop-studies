#include <iostream>
using std::string;

class Employee {
public:
	string Name;
	string Company;
	int Age;

	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}
};

int main() {
	Employee employee1;
	employee1.Name = "Ravi";
	employee1.Company = "ABCCompany";
	employee1.Age = 28;
	employee1.IntroduceYourself();
}