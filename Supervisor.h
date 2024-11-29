/**
 * @file Supervisor.h
 * @author Dr. Kathleen Ericson
 * @date 2024-11-29
 * @brief Defines the Supervisor class & its associated methods
 * 
 * 
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * Holds info about a supervisor employee at the company (inherits from Employee class)
 *
 * @class Supervisor{ Supervisor.h "Supervisor.h"}
 * @brief Defines an Supervisor object and its associated methods & member variables
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;// The number of employees supervised by the supervisor
 public:

 /**
 * Prints information about a Supervisor
 *
 * @pre
 * @return void 
 * @post Supervisor info has been printed to stdout
 * 
 */
  void print();

/**
 * Returns the supervisor's total pay (hours * wage)
 *
 * @pre
 * @return double The supervisor's total pay
 * @post
 * 
 */
  double calculatePay();

  /**
 * Default constructor
 *
 * @pre
 * @post All of the supervisor's member variables have been set to -1
 * 
 */
  Supervisor();

  /**
 * Employee constructor
 *
 * @param ID The supervisor's ID number
 * @param years The number of years the supervisor has worked at the company
 * @param hourlyRate The hourly wage of the supervisor
 * @param hoursWorked The number of hours that the supervisor has worked
 * @param numSupervised The number of employees supervised by the supervisor
 * @pre
 * @post All of the supervisor's member variables have been set to their corresponding argument values
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
