/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    C. Can I Square?
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/1915/C



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
        int n ;
        cin>>n;
        ll x, result=0 ;
        for(int i = 0 ; i < n ; i++)
        {

            cin>>x;
            result += x ;
        }
        ll root = sqrt(result);
        if(root * root == result)
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
        }


    }
    return 0;
}
