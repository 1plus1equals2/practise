#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
//using std::precision;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;

int op_incr(int i)
{
    return i*10 +1;
}

int main(int argc, char** argv)
{
    //streamsize prec = cout.precision();
    //cout << prec << endl;

    //cout << "your grade is " << setprecision(prec)
    //     << 0.2 * 93.33432 + 0.4 * 88.213 + 0.4 * 876/10
    //     << setprecision(prec) << endl;

    vector<int> vec;
    for(int i=0; i<20; i++)
        vec.push_back(i);

    vector<int> ret;
    ret.resize(vec.size());

    std::transform(vec.begin(), vec.end(), ret.begin(), op_incr);
    for(vector<int>::iterator it = ret.begin(); it != ret.end(); it++)
        cout << *it << endl;

    return 0;
}
