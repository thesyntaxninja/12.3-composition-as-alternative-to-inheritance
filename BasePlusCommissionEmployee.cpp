// 12.3 BasePlusCommissionEmployee.cpp
// Description: Problem 1 of 2 due week 6
// Programmer: Parker Esmay
// Date: 03/02/2015

#include <iostream>
#include <stdexcept>

#include "BasePlusCommissionEmployee.h"

//constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double sales,
	double rate, double salary): commissionEmployee(first, last, ssn, sales, rate)
	{
		setBaseSalary(salary); // validate and store base salary
		
	} // end BasePlusCommisionEmployee constructor
	
	// set first name
	void BasePlusCommissionEmployee::setFirstName(const string &first) 
	{
		commissionEmployee.setFirstName(first);
	}
	
	// return first name
	string BasePlusCommissionEmployee::getFirstName() const 
	{
		return commissionEmployee.getFirstName();
	}
	
	// set last name
	void BasePlusCommissionEmployee::setLastName(const string &last) 
	{
		commissionEmployee.setLastName(last);
	}
	
	// return last name
	string BasePlusCommissionEmployee::getLastName() const
	{
		return commissionEmployee.getLastName();
	}
	
	// set ssn
	void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn)
	{
		commissionEmployee.setSocialSecurityNumber(ssn);
	}
	
	// return ssn
	string BasePlusCommissionEmployee::getSocialSecurityNumber() const
	{
		return commissionEmployee.getSocialSecurityNumber();
	}
	
	// set gross sales
	void BasePlusCommissionEmployee::setGrossSales(double sales)
	{
		commissionEmployee.setGrossSales(sales);
	}
	
	// return gross sales
	double BasePlusCommissionEmployee::getGrossSales() const
	{
		return commissionEmployee.getGrossSales();
	}
	
	// set commission rate
	void BasePlusCommissionEmployee::setCommissionRate(double rate)
	{
		commissionEmployee.getCommissionRate();
	}
	
	// return commission rate
	double BasePlusCommissionEmployee::getCommissionRate() const
	{
		return commissionEmployee.getCommissionRate();
	}
	
	// set base salary
	void BasePlusCommissionEmployee::setBaseSalary(double salary)
	{
		if (salary >= 0.0)
		baseSalary = salary;
		else
			throw invalid_argument("Salary must be >= 0.0");
	}
	
	// return base salary
	double BasePlusCommissionEmployee::getBaseSalary() const
	{
		return baseSalary;
	}
	
	// calculate earnings
	double BasePlusCommissionEmployee::earnings() const
	{
		return getBaseSalary() + commissionEmployee.earnings();
	}
	
	// print BasePlusCommissionEmployee object
	void BasePlusCommissionEmployee::print() const
	{
		cout << "base-salaried ";
		
		commissionEmployee.print();
		
		cout << "\nbase salry: " << getBaseSalary();
	}
