#include <iostream>
#include <vector>
using namespace std;

bool remove_first_negative_element(vector<int>& vec, int& removed_element)
//как удалить элемент, если мы пишем, что вектор константа? я убрал const
{
    int b = 0;
    for(int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] < 0)
        {
            removed_element = vec[i];
            while(i < vec.size())
            {
                b = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = b;
                i++;
            }
            vec.pop_back();
            return(true);
        }
    }
    return false;
}

int main()
{
    int n, a;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    remove_first_negative_element(A, a);
    for(int i = 0; i < A.size(); ++i)
    {
        cout << A[i] << " ";
    }
    return 0;
}
