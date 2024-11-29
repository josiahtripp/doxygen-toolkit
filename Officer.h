/**
 * @file Officer.h
 * @author Dr. Kathleen Ericson
 * @date 2024-11-29
 * @brief Defines the Officer class & its associated methods
 * 
 * 
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * Holds info about an officer employee at the company (inherits from Employee class)
 *
 * @class Officer{ Officer.h "Officer.h"}
 * @brief Defines an Officer object and its associated methods & member variables
 *
 */
class Officer : public Employee {
 private:
  double evilness; //how evil the officer is
 public:

/**
 * Prints information about an officer
 *
 * @pre
 * @return void 
 * @post Officer info has been printed to stdout
 * 
 */
  void print();

/**
 * Returns the officer's total pay (hours * wage)
 *
 * @pre
 * @return double The officer's total pay
 * @post
 * 
 */
  double calculatePay();

/**
 * Default constructor
 *
 * @pre
 * @post All of the officer's member variables have been set to -1
 * 
 */
  Officer();

/**
 * Employee constructor
 *
 * @param ID The officer's ID number
 * @param years The number of years the officer has worked at the company
 * @param hourlyRate The hourly wage of the officer
 * @param hoursWorked The number of hours that the officer has worked
 * @param evilness The evilness level of the officer
 * @pre
 * @post All of the offcier's member variables have been set to their corresponding argument values
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
