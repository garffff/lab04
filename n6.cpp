#include <iostream>
#include <string>
using namespace std;

string replace(const string& str, const string& old, const string& new_string)
{
    string nstr;
    int i = 0;
    while(str.find(old, i) < str.size())
    {
        for(int j = i; j < str.find(old, i); ++j) nstr += str[j];
        nstr += new_string;
        i = str.find(old, i) + old.size();
    }
    if(i < str.size())
    {
        for(int j = i; j < str.size(); ++j) nstr += str[j];
    }
    return nstr;
}

int main()
{
    string sent;
    cout << "Insert string" << endl;
    getline(cin, sent);
    cout << "Insert substring and its replacement" << endl;
    string old, newst;
    cin >> old >> newst;
    string newstr = replace(sent, old, newst);
    cout << newstr << endl;
    return 0;
}
