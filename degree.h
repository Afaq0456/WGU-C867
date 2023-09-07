#ifndef DEGREE_H
#define DEGREE_H

// Enum definition
enum class DegreeProgram {
    SECURITY,
    SOFTWARE,
    NETWORK
};

// Function to convert DegreeProgram enum to string
std::string degreeProgramToString(DegreeProgram degree);

#endif
