//Class of AA
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k, l, r, p = 0, a = 1;
    cin >> l >> r >> k;
    while(a<=r)
    {
        if(l <= a)
        {
            cout << a << " ";
            p++;
        }
        if(r*1.0/a*1.0<k)
            break;
        a *= k;
    }
    if(p == 0)cout << -1;
    
    cout << endl;
    return 0;
}
