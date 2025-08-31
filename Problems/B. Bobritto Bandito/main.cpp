/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :   B. Bobritto Bandito
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/contest/2094/problem/B



__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/


#include <bits/stdc++.h>
#define Taha ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;

int main()
{
    Taha;
    int t ;
    cin>> t ;
    while(t--)
    {
        long long n, m, l, r;
        cin >> n >> m >> l >> r;
        long long a = min(abs(l), m);
        long long L = -a;
        long long R= m - a;
        cout << L << " " << R << "\n";
    }
    return 0;
}
