/**
 * Project OOP3200-F2020-Lesson4
 */

#pragma once
#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public:
	std::string m_employeeID;
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param emplyee_id
 */
void Professor(std::string first_name, std::string last_name, float age, std::string emplyee_id);

	std::string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(std::string value);
    
void Teacher();

std::string ToString() override;
};

#endif //_PROFESSOR_H