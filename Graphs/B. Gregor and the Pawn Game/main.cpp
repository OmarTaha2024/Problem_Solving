/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :  B. Gregor and the Pawn Game
@author : Omar Mohamed El Sayed Taha
@Link : https://codeforces.com/problemset/problem/1549/B



__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/


#include <bits/stdc++.h>
#define Taha ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "

using namespace std;

int max_pawns(int n, string enemy_row, string gregor_row) {
    int counter = 0;

    for (int j = 0; j < n; ++j) {
        if (gregor_row[j] == '1') {
            if (j > 0 && enemy_row[j - 1] == '1') {
                counter++;
                enemy_row[j - 1] = '0';
            }
            else if (enemy_row[j] == '0') {
                counter++;
            }
            else if (j < n - 1 && enemy_row[j + 1] == '1') {
                counter++;
                enemy_row[j + 1] = '0';
            }
        }
    }

    return counter;
}

int main() {
    Taha;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string enemy_row, gregor_row;
        cin >> enemy_row >> gregor_row;
        cout << max_pawns(n, enemy_row, gregor_row) << el;
    }

    return 0;
}
