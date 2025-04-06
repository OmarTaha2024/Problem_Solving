/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    	1456. Maximum Number of Vowels in a Substring of Given Length
@author : Omar Mohamed El Sayed Taha
@Link : https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75


__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/

#include <bits/stdc++.h>
using namespace std;
int maxVowels(string s, int k)
{
    int current_Counter = 0, Max_counter = 0 ;

    for(int i = 0 ; i<k ; i++)
    {

        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u') current_Counter++;
    }
    Max_counter = current_Counter ;

    for(int i = k ; i<s.length() ; i++)
    {
        if(s[i-k] == 'a' || s[i-k] == 'o' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'u') current_Counter--;
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u') current_Counter++;
        Max_counter = max(Max_counter,current_Counter);
    }
    return Max_counter;
}



int main()
{
    cout << maxVowels("leetcode",3)<< endl;
    return 0;
}
