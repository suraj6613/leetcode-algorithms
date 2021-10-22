#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution
{
public:
    string reverseWords(string s)
    {
        // solution using two pointers r and l
        int r = 0;
        int l = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ' && i != n - 1)
            {
                r++;
            }
            else if (s[i] != ' ' && i == n - 1)
            {
                reverse(s.begin() + l, s.end());
                break;
            }
            else if (s[i] == ' ')
            {
                reverse(s.begin() + l, s.begin() + r);
                l = r + 1;
                r += 1;
            }
        }
        return s;
    }
};
int main()
{
    string s;
    for (int i = 0; i < s.size(); i++)
    {
        cin >> s[i];
    }

    int target;
    cin >> target;
    class Solution sob;
    sob.reverseWords(s);
}