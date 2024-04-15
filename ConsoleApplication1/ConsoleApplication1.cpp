#include <iostream>
using std::string;

class Employee {
private:
	string Name;
	string Company;
	int Age;

public:
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

	//setter
	void setName(string name) {
		Name = name;
	}
	//getter
	string getName() {
		return Name;
	}

	//setter
	void setCompany(string company) {
		Company = company;
	}
	//getter
	string getCompany() {
		return Company;
	}

	//setter
	void setAge(int age) {
		if (age >= 18)
		Age = age;
	}
	//getter
	int getAge() {
		return Age;
	}

};

int main() {
	Employee employee1 = Employee("Ravi", "ABCCompany", 27);
	/*employee1.Name = "Ravi";
	employee1.Company = "ABCCompany";
	employee1.Age = 27;*/
	employee1.IntroduceYourself();

	Employee employee2 = Employee("David", "Microsoft", 36);
	employee2.IntroduceYourself();

	Employee employee3 = Employee("Ron", "Google", 38);
	employee3.IntroduceYourself();

	//testing setters and getters
	employee1.setAge(16);
	std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;
}