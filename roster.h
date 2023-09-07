#ifndef ROSTER_H
#define ROSTER_H

#include "student.h" // Include the student.h header

class Roster {
public: // Specify that the members below are accessible from outside the class
    Roster(); // Constructor
    ~Roster(); // Destructor

    void add(string studentID, string firstName, string lastName,
             string emailAddress, int age, int daysInCourse1,
             int daysInCourse2, int daysInCourse3, DegreeProgram degree);

    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

public:
    Student* classRosterArray[5]; // Now accessible only within the class
};

#endif
