/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    A. Skibidus and Amog'u
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/contest/2065/problem/A



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
        string w;
        cin >> w;
        cout << w.substr(0, w.size() - 2) << "i\n";
    }
    return 0;
}
