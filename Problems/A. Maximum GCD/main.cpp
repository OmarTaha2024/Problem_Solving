/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    A. Maximum GCD
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/1370/A



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
      if(n % 2 == 0)
      {
          cout<<(n/2)<<el;
      }
      else
      {
          cout<<(n-1)/2<<el;
      }
    }
    return 0;
}
