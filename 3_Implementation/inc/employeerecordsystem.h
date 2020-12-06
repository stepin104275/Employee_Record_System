/**
* @file employeerecordsystem.h
*
*/

#ifndef RECORD_SYSTEM
#define RECORD_SYSTEM


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//Used macro
#define MAX_YR  9999
#define MIN_YR  1900
#define MAX_SIZE_USER_NAME 30
#define MAX_SIZE_PASSWORD  20
#define FILE_NAME  "EmployeeRecordSystem.bin"


// Macro related to the Employees info
#define MAX_FATHER_NAME 50
#define MAX_EMPLOYEE_NAME 50
#define MAX_EMPLOYEE_ADDRESS 300
#define FILE_HEADER_SIZE  sizeof(sFileHeader)
//structure to store date



typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;
//Elements of structure
typedef struct// to call in program
{
    char fatherName[MAX_FATHER_NAME];// declare the character data type
    char employeeName[MAX_EMPLOYEE_NAME];// declare the character data type
    char employeeAddr[MAX_EMPLOYEE_ADDRESS];// declare the character data type
    Date employeeJoiningDate;// declare the integer data type
    unsigned int employee_id; // declare the integer data type
    float employeeSalary;
} s_EmployeesInfo;


void headMessage(const char *message);

void welcomeMessage();
int isNameValid(const char *name );
int  IsLeapYear(int );
int isValidDate(Date *validDate);
void addEmployeeInDataBase();
void searchEmployee();
void viewEmployee();
void deleteEmployee();
void updateCredential(void);
void menu();
void login();
int isFileExists(const char *path);
void init();

#endif
