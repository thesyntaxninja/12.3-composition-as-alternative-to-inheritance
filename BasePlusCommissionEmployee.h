// 12.3 BasePlusCommissionEmployee.h
// Description: Problem 1 of 2 due week 6
// Programmer: Parker Esmay
// Date: 03/02/2015

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee
{
	public:
		BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);
		
		void setFirstName(const string &); // set first name
		string getFirstName() const; // return first name
		
		void setLastName(const string &); // set last name
		string getLastName() const; // return last name
		
		void setSocialSecurityNumber(const string &); // get SSN
		string getSocialSecurityNumber() const; // return SSN
		
		void setGrossSales(double); // set gross sales amount
		double getGrossSales() const; // return gross sales amount
		
		void setCommissionRate(double); // set commission rate
		double getCommissionRate() const; // return commission rate
		
		void setBaseSalary(double); // set base salary
		double getBaseSalary() const; // return base salary
		
		double earnings() const; // calculate earnings
		void print() const; // print BasePlusCommissionEmployee
		
	private:
		double baseSalary; // base salary
		CommissionEmployee commissionEmployee; // using composition
};

#endif
