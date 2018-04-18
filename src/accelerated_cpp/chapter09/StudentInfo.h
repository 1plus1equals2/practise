#ifndef __STUDENT_INFO__
#define __STUDENT_INFO__

#include <iostream>
#include <vector>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;

    std::istream& read(std::istream&);
     
    double output() const;
    double average() const;
};

#endif
