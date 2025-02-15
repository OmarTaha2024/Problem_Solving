/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    A. PolandBall and Hypothesis
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/755/A



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
    short n ;
    cin>>n ;
    if(n < 2 ) cout<<3<<el;
    else if(n%2 == 1)cout<<1<<el;
    else
    {
        int m = 1 ;
        bool is_prime = false ;
        while(!is_prime)
        {
            m++;
            int res = (n * m ) + 1 ;

            for(int i = 2 ; i <= sqrt(res); i++ )
            {
                if(res % i == 0)
                {
                    is_prime = true ;
                    break;
                }
            }
        }
        cout<<m<<el;
    }
    return 0;
}
