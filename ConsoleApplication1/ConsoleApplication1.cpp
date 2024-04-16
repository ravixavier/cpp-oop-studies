#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
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
	

void AskForPromotion() {
    if(Age>=30)
    std::cout << Name << " got promoted!" << std::endl;
    else
        std::cout << Name << ", sorry NO promotion for you!" << std::endl;
}

};

int main() {
	Employee employee1 = Employee("Ravi", "ABCCompany", 30);
	Employee employee2 = Employee("Ruy", "Amazon", 28);
	Employee employee3 = Employee("Michael", "Google", 25);

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
    */

   employee1.AskForPromotion();
   employee2.AskForPromotion();
   employee3.AskForPromotion();

}