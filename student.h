#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int numDays[3];
    DegreeProgram degree;

public:
    Student(); // Default constructor
    Student(string studentID, string fName, string lName, string emailAddr, 
        int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, 
        DegreeProgram degree);
    void print();
    void setStudentID(string ID);
    string getStudentID();
    void setFirstName(string fName);
    string getFirstName();
    void setLastName(string lName);
    string getLastName();
    void setEmail(string emailAddr);
    string getEmail();
    void setAge(int studentAge);
    int getAge();
    void setNumDays(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    int* getNumDays();
    void setDegreeProgram(DegreeProgram StudentDegree);
    DegreeProgram getDegreeProgram();
    ~Student(); // Destructor
};

#endif
