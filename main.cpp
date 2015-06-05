// 12.3 main.cpp
// Description: Problem 1 of 2 due week 6
// Programmer: Parker Esmay
// Date: 03/02/2015

// (Composition as an Alternative to Inheritance) Many programs written with inheritance could be written
// with composition instead, and vice versa. Rewrite class BasePlusCommissionEmployee of the 
// CommissionEmployee-BasePlusCommissionEmployee hierarchy to use composition rather than inheritance.
// After you do this, asseess the relative merits of the two approaches for designing classes CommissionEmployee and
// BasePlusCommissionEmployee, as well as for object oriented programs in general. Which approach is more natural? Why?

// To me the more natural approach seems to be inheritance. I prefer it and in larger programs I think it pays off for
// code reuse and extensibility. It also depends on the relationship you are modeling. Composition represents has-a relationships
// and inheritance is good for is-a relationships. It makes more sense to use composition with something like a car for example.
// Wikipedia provides a good example that states an automobile has or is composed from objects like a steering wheel and wheels.
// In a smaller program like this it doesn't matter a whole lot which approach is used however,
// with composition the realtionship is not reflected accurately. 
// In larger programs you want to make sure you take the time up front to make sure you are using the right solution and accurately 
// reflecting the appropriate relationships between classes. 

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

#include "BasePlusCommissionEmployee.h"

// Test with composed objects
int main(int argc, char** argv) 
{
	// instantiate BasePlusCommissionEmployee object             
   BasePlusCommissionEmployee employee( "Bob", "Lewis", "333-33-3333", 5000.00, .04, 300 );
   
   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission employee data
   cout << "Employee information obtained by get functions: \n" 
      << "\nFirst name is " << employee.getFirstName() 
      << "\nLast name is " << employee.getLastName()
      << "\nSocial security number is " 
      << employee.getSocialSecurityNumber()
      << "\nGross sales is " << employee.getGrossSales()
      << "\nCommission rate is " << employee.getCommissionRate()
      << "\nBase salary is " << employee.getBaseSalary() << endl;

   employee.setBaseSalary(1000); // set base salary

   cout << "\nUpdated employee information output by print function: \n" 
      << endl;
   employee.print(); // display the new employee information

   // display the employee's earnings
   cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
   
   getch();
	return 0;
}
