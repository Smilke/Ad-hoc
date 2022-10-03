//class of AA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    vector<int> A;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cin >> b;
        A.push_back(b);
        sort(A.begin(), A.end());
    }
    for(int j = 0; j <A.size();j++)
    {
        cout << A[j] << " ";
    }
}
