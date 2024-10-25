#include <iostream>
#include <vector>
using namespace std;

int argmax(const vector<float>&A)
{
    if(A.size() == 0) return -1;
    float ma = A[0];
    int c = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        if(A[i] > ma)
        {
            ma = A[i];
            c = i;
        }
    }
    return c;
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
    cout << argmax(A);
    return 0;
}
