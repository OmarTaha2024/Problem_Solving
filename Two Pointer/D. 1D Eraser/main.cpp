/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    D.1D Eraser
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/1873/D



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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int final_result=0;
        int l = 0;
        while (l < n)
        {
            if (s[l] == 'B')
            {
                for (int i = 0 ; i < k && l < n ;i++)
                {
                    s[l]='W';
                }
                l += k;
                final_result++;
            }
            else l++;
        }
        cout << final_result << el;
    }
    return 0;
}
