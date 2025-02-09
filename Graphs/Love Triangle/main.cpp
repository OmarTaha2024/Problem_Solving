/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  A. Love Triangle
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/939/A



__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/


#include <bits/stdc++.h>
#define Taha ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }

    bool found = false;
    for (int i = 1; i <= n; ++i) {
        int j = f[i];
        int k = f[j];
        if (f[k ] == i) {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endl;
    return 0;
}
