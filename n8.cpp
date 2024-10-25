#include <iostream>
#include <string>
#include <vector>

using namespace std;

string join(const vector<string>&vec, const string& sep)
{
    string str;
    for(int i = 0; i < vec.size(); ++i) str+= vec[i] + sep;
    return str;
}

int main()
{
    string sep;
    cout << "Insert separator" << endl;
    getline(cin, sep);
    cout << "Insert vector's length and vector itself" << endl;
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> vec[i];
    }
    string str = join(vec, sep);
    cout << str;
    return 0;
}
