/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  C. Prepend and Append
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/1791/C



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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n - 1;
        while (l < r)
        {
            if ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))
            {
                l++;
                r--;
            }
            else
                break;
        }


        int final_result = r - l + 1;
        cout << final_result << el;
    }
    return 0;
}
