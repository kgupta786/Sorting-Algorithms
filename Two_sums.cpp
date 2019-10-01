#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> vc;
    map<int, int> m1;

    for (int i = 0; i < nums.size(); i++)
    {
        int left = target - nums[i];

        if (m1.find(left) != m1.end())
        {
            vc.push_back(m1[left]);
            vc.push_back(i);
        }

        m1[nums[i]] = i;
    }

    return vc;
}

int main()
{
}