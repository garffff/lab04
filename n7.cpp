#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string&str, char sep)
{
    vector<string> vec;
    string prs;
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] != sep) prs += str[i];
        else
        {
            vec.push_back(prs);
            prs = "";
        }
    }
    if(prs != "") vec.push_back(prs);
    if(vec.size() == str.size())
    {
        vector<string> pusto;
        return pusto;
    }
    return vec;
}

int main()
{
    string sent;
    cout << "Insert sentence" << endl;
    getline(cin, sent);
    char sep;
    cout << "Insert separator" << endl;
    sep = cin.get();
    vector<string> vec;
    vec = split(sent, sep);
    if(vec.size() == 0) cout << "vector is empty"<< endl;
    else
    {
        for(int i = 0; i < vec.size(); ++i)
        {
            cout << "|" <<vec[i] << "|" << " ";
        }
    }
    return 0;
}
