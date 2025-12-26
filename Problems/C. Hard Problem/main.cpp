/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    C. Hard Problem
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/2044/C



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
    cin>>t ;
    while(t--)
    {
        int m, a,b,c;


        cin>>m>>a>>b>>c;

        int total_seat ,total_rest,seat_F,seat_S;

        seat_F = min(m,a);
        seat_S = min(m,b);
        total_rest = (2 * m) - (seat_F + seat_S );

        total_seat = seat_F+ seat_S+ ( min(total_rest , c));

        cout<<total_seat <<endl;

    }


    return 0;
}
