/*
 Author: Afaq Ahmad
 Created: 28/8/2023
*/

#include <string> // Include the string header

#include "degree.h"

std::string degreeProgramToString(DegreeProgram degree) {
    switch (degree) {
        case DegreeProgram::SECURITY:
            return "SECURITY";
        case DegreeProgram::SOFTWARE:
            return "SOFTWARE";
        case DegreeProgram::NETWORK:
            return "NETWORK";
        default:
            return "UNKNOWN";
    }
}
