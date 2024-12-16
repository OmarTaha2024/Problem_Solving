/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  J. Multiples
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

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
    int a, b;
    cin >> a >> b;
    cout << (((b%a) == 0 | (a%b) == 0 ) ? "Multiples" : "No Multiples") << el;
    return 0;
}
