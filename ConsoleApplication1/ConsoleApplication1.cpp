#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee :AbstractEmployee {

private:
	string Company;
	int Age;

protected:
	string Name;

public:
	//name setter&getter
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}

	//company setter&getter
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}

	//age setter&getter
	void setAge(int age) {
		if (age >= 18)
			Age = age;
	}
	int getAge() {
		return Age;
	}

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



	void AskForPromotion() {
		if (Age >= 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry NO promotion for you!" << std::endl;
	}

};

class Developer : public Employee {
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage) :Employee(name, company, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void FixBug() {
		std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
	}
};

class Teacher : public Employee {
public:
	string Subject;
	Teacher(string name, string company, int age, string subject) :Employee(name, company, age) {
		Subject = subject;
	}
	void PrepareLesson() {
		std::cout << Name << " is preparing " << Subject << " lesson." << std::endl;
	}

};

int main() {
	Employee employee1 = Employee("Ravi", "Microsoft", 30);
	Employee employee2 = Employee("Ruy", "Amazon", 28);
	Employee employee3 = Employee("Michael", "Google", 25);

	Developer d = Developer("Ravi", "Microsoft", 30, "C#.");
	d.FixBug();
	d.FixBug();
	d.FixBug();
	d.AskForPromotion();

	Teacher t = Teacher("John", "UFBA", 30, "History");
	t.PrepareLesson();
	t.AskForPromotion();


	/*
	employee1.Name = "Ravi";
	employee1.Company = "ABCCompany";
	employee1.Age = 27;




	employee1.IntroduceYourself();
	employee2.IntroduceYourself();
	employee3.IntroduceYourself();


	testing setters and getters
	employee1.setAge(16);
	std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;


	employee1.AskForPromotion();
	employee2.AskForPromotion();
	employee3.AskForPromotion();
   */



}
