#include <iostream>
#include <vector>
using namespace std;

float mean(const vector<float>&A)
{
    float sum = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        sum += A[i];
    }
    return (float) sum / A.size();
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
    cout << mean(A);
    return 0;
}
