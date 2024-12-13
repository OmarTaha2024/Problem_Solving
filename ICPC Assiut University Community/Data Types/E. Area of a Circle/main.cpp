/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  E. Area of a Circle
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E


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
    float Pi = 3.141592653;
    float r ;
    cin >> r ;
    double area = Pi*pow(r,2);
    cout << fixed << setprecision(9)<<area<<el;
    return 0;
}
