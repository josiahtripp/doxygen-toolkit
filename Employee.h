/**
 * @file Employee.h
 * @author Dr. Kathleen Ericson
 * @date 2024-11-28
 * @brief Defines the Employee class & its associated methods
 * 
 * 
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * Holds info about an employee at the company
 *
 * @class Employee{ Employee.h "Employee.h"}
 * @brief Defines an Employee object and its associated methods & member variables
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; //years worked at company
  
 protected:
  double hourlyRate; //wage
  float hoursWorked; //hours
 public:

 /**
 * Prints information about an employee
 *
 * @pre
 * @return void 
 * @post Employee info has been printed to stdout
 * 
 */
  virtual void print();

/**
 * Returns the employee's total pay (hours * wage)
 *
 * @pre
 * @return double The employees total pay
 * @post
 * 
 */
  virtual double calculatePay();

/**
 * Prints a messsage about the employee's anniversary & increasses their pay
 *
 * @pre
 * @return void
 * @post The number of years foor the employee has been incremented & their pay has increased by 0.2%
 * 
 */
  void anniversary();

/**
 * Default constructor
 *
 * @pre
 * @post All of the employee's member variables have been set to -1
 * 
 */
  Employee();

/**
 * Employee constructor
 *
 * @param ID The employee's ID number
 * @param years The number of years the employee has worked at the company
 * @param hourlyRate The hourly wage of the employee
 * @param hoursWorked The number of hours that the employee has worked
 * @pre
 * @post All of the employee's member variables have been set to their corresponding argument values
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
