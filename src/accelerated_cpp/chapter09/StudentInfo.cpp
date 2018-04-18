#include <iostream>
#include <vector>
#include <string>
#include "StudentInfo.h"

using std::istream;             using std::string;
using std::cin;                 using std::cout;
using std::endl;

double average(double x, double y)
{
    return (x+y)/2;
} 

istream& Student_info::read(istream& in)
{
    in >> name >> midterm >> final;
    return in;
}

double Student_info::output() const
{
    cout << string(10, '#') << endl;
    cout << "name: " << name << endl;
    cout << "midterm: " << midterm << endl;
    cout << "final: " << final << endl;
    cout << string(10, '#') << endl;
}

double Student_info::average() const
{
    double a = ::average(midterm, final);
    cout << string(10, '#') << endl;
    cout << "average: " << a << endl;
    cout << string(10, '#') << endl;
}

int main()
{
    Student_info s;
    s.read(cin);
    s.output();
    s.average();
    return 0;
}
