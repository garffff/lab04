#include <iostream>
#include <vector>
#include <limits>
using namespace std;

pair<float, float> minMax(const vector<float>&A)
{
    if(A.size() == 0)
    {
        float mi = numeric_limits<float>::min();
        float ma = numeric_limits<float>::max();
        return make_pair(mi, ma);
    }
    float mi = A[0], ma = A[0];
    for(int i = 0; i < A.size(); ++i)
    {
        if(A[i] <= mi) mi = A[i];
        if(A[i] >= ma) ma = A[i];
    }
    return make_pair(mi, ma);
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
    cout << minMax(A).first << " " << minMax(A).second;
    return 0;
}
