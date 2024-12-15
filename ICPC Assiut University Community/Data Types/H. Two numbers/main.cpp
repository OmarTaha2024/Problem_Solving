/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  H. Two numbers
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H


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
    int a, b ;
    cin >> a >> b ;

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor((float)a/b)<<endl;

    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil((float)a/b)<<endl;

    cout<<"round "<<a<<" / "<<b<<" = "<<round((float)a/b)<<endl;
    return 0;
}
