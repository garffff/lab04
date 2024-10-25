#include <iostream>
#include <vector>
using namespace std;

void sort(vector<float>&A)
{
    float b = 0;
    for(int j = 0; j < A.size(); ++j)
    {
        for(int i = 1; i < A.size(); ++i)
        {
            if(A[i] < A[i - 1])
            {
                b = A[i - 1];
                A[i - 1] = A[i];
                A[i] = b;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<float> A(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    sort(A);
    for(int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    return 0;
}
