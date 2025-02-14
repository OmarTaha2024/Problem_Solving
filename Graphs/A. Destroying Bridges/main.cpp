/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  A. Destroying Bridges
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/1944/A



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
    int t ;
    cin >> t ;
    while(t--)
    {

        int n, k ;
        cin>>n>>k;
        int min_bridges = 0 ;

        if(k >= (n-1) ) min_bridges = 1 ;
        else min_bridges = n  ;

        cout<< min_bridges<<el;
    }

    return 0;
}
