/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name : F. Digits Summation
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F


__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/


#include <bits/stdc++.h>
#define Taha ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;


ll get_last_digit(ll n)
{
   return n % 10;
}

int main()
{
    Taha;
    ll x, y;
    cin >> x >> y;

    ll last_digit_x = get_last_digit(x);
    ll last_digit_y = get_last_digit(y);

    cout << last_digit_x + last_digit_y << el;
    return 0;
}
