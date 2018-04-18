#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

typedef string::size_type string_size;

bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split(const string& s)
{
    typedef string::const_iterator iter;
    vector<string> ret;

    iter i = s.begin();
    while(i != s.end())
    {
        i = std::find_if(i, s.end(), not_space);
        iter j = std::find_if(i, s.end(), space);

        if ( i != s.end() )
            ret.push_back(string(i, j));

        i = j; 
    }

    return ret;
}

int main(int argc, char** argv)
{
    string s;
    while(getline(cin, s))
    {
        vector<string> v = split(s);
        for(vector<string>::size_type i = 0; i != v.size(); i++)
            cout << v[i] << endl;
    }
    return 0;
}
