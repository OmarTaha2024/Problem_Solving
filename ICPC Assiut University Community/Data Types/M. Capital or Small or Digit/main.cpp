/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  M. Capital or Small or Digit
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M


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
   char c; cin >> c ;
    if(isdigit(c))cout<<"IS DIGIT"<<el;
    else if(islower(c)){
            cout<<"ALPHA\nIS SMALL"<<el;
    }
    else {
          cout<<"ALPHA\nIS CAPITAL"<<el;

    }
    return 0;
}
