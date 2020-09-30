/**
 * Project OOP3200-F2020-Lesson4
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    string m_employeeID;
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param emplyee_id
 */
void Professor(string first_name, string last_name, float age, string emplyee_id);
    
string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(string value);
    
void Teacher();
    
string ToString();
};

#endif //_PROFESSOR_H