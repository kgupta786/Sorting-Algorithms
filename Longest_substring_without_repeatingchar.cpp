#include <bits/stdc++.h>
using namespace std;

int longestlength(string s)
{

    vector<int> vc(26, 0);
    int low = -1;
    int n = s.size();
    int ans = INT_MIN;

    for (int i = 0; i < s.size(); i++)
    {
        if (vc[s[i] - 'a'] != -1)
        {
            ans = max(ans, i - low - 1);
            low = max(low, vc[s[i] - 'a']);
        }
        vc[s[i] - 'a'] = i;
    }

    ans = max(ans, n - low - 1);

    return ans;
}

int main()
{
    //

    return 0;
}