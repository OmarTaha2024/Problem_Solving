/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  G. Summation from 1 to N
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G


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
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    cout << sum << el;

    return 0;
}
