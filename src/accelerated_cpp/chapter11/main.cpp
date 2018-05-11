#include <iostream>
#include "Vec.h"

using std::cout;
using std::endl;

int main( int argc, char **argv )
{
    Vec<int> vec(10, 7);

    Vec<int>::iterator it = vec.begin();
    while(it != vec.end())
        cout << *it++ << endl;
    return 0;
}
