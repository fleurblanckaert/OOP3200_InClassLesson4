/*
 * NAme: Fleur Blanckaert
 * Student Number:100747083
 */


#include <iostream>
#include <vector>

#include "Person.h"
#include "Student.h"
#include "Professor.h"

int main()
{
	//Person
	    Person person = Person("Bob", "Smith", 35.6f);
		person.SaysHello();

		std::cout << person.ToString();

	//Student
	
		Student student = Student("Mike", "Jones", 22.0f, "MJ123456789");
		student.SaysHello();
		student.Studies();

		std::cout << student.ToString() << std::endl;

	//Professor
		Professor professor = Professor("Andrew", "Hogue", 38.0f, "AH123456789");
		professor.SaysHello();
		professor.Teaches();

		std::cout << professor.ToString() << std::endl;

	//Calls student in different way
		std::vector<Person*>people;
		people.push_back(new Person("Alvaro", "Quevado", 36.0f));
		people[0]->SaysHello();

		std::cout << people[0]->ToString() << std::endl;
	
}


