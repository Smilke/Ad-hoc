#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val, n, a, i = 0, b = 0;
    cin >> n;
    while (b == 0)
    {
        i++;
        val = n/i;
        if(val*i == n && val!=n && val <= 9)b=i;
        if(val == 1 && n == 1)
        {
            b = i;
            break;

        }
    }
    
    cout << b << endl;
    for(int j = 0; b > j;j++)
    {
        cout << val <<" ";
    }
    cout << endl;

    return 0;

}
