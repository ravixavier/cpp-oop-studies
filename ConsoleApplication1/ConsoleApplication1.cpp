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

	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
};

int main() {
	Employee employee1 = Employee("Ravi", "ABCCompany", 28);
	/*employee1.Name = "Ravi";
	employee1.Company = "ABCCompany";
	employee1.Age = 28;*/
	employee1.IntroduceYourself();

	Employee employee2 = Employee("David", "Microsoft", 36);
	employee2.IntroduceYourself();

	Employee employee3 = Employee("Ron", "Google", 38);
	employee3.IntroduceYourself();
}