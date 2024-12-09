/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  A. Sereja and Dima
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/381/A



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
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int score_s = 0, score_d = 0;
    bool s_turn = true;

    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (v[left] > v[right])
        {
            if (s_turn)
            {
                score_s += v[left];
            }
            else
            {
                score_d += v[left];
            }
            left++;
        }
        else
        {
            if (s_turn)
            {
                score_s += v[right];
            }
            else
            {
                score_d += v[right];
            }
            right--;
        }
        s_turn = !s_turn;
    }

    cout << score_s << " " << score_d;
    return 0;
}
