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

	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}

	void AskForPromotion() {
		if (Age >= 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry NO promotion for you!" << std::endl;
	}

	virtual void Work() {
		std::cout << Name << " is checking e-mail, task backlog, performing tasks..." << std::endl;
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
		std::cout << Name << " fixed bug using " << FavProgrammingLanguage << "." << std::endl;
	}

	void Work() {
		std::cout << Name << " is writing " << FavProgrammingLanguage << " code." << std::endl;
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

	void Work() {
		std::cout << Name << " teaching " << Subject << " class." << std::endl;
	}
};

int main() {
	Employee employee1 = Employee("Ravi", "Microsoft", 30);
	Employee employee2 = Employee("Ruy", "Amazon", 28);
	Employee employee3 = Employee("Michael", "Google", 25);

	Developer d = Developer("Ravi", "Microsoft", 30, "C#");
	/*d.FixBug();
	d.AskForPromotion();*/

	Teacher t = Teacher("John", "UFBA", 30, "History");
	/*t.PrepareLesson();
	t.AskForPromotion();*/

	d.Work();
	t.Work();

	 //the most common use of polymorphism is when a
	//parent class reference is used to refer to a child class object

	Employee* e1 = &d;
	Employee* e2 = &t;
	

	e1->Work();
	e2->Work();


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
