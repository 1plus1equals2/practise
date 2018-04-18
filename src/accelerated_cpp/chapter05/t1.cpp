#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

typedef string::size_type string_size;

vector<string> split(const string& s)
{
    vector<string> ret;
    string_size i = 0;
    while(i != s.size())
    {
        while(i != s.size() && isspace(s[i]))
            ++i;

        string_size j = i;
        while(j != s.size() && !isspace(s[j]))
            ++j;
        
        if(i != j)
        {
            ret.push_back(s.substr(i, j-i));
            i = j;
        }
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
