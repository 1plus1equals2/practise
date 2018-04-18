#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::sort;
using std::domain_error;

template <class T>
T median(vector<T> v)
{
    typedef typename vector<T>::size_type vec_sz;
    vec_sz size = v.size();
    if(size == 0)
        throw domain_error("median of an empty vector");
    sort(v.begin(), v.end());
    vec_sz mid = size/2;
    return size % 2 == 0 ? (v[mid] + v[mid-1]) / 2 : v[mid];
}

int main(int argc, char** argv)
{
    srand(time(NULL));
    vector<float> vec;
    for(int i = 0; i < 100; i++)
        vec.push_back(rand()%1000+0.1);
    try
    {
        cout << median(vec) << endl;
    }
    catch(domain_error e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
