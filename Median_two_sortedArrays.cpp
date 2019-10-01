#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{

    if (nums1.size() > nums2.size())
    {
        return findMedianSortedArrays(nums2, nums1);
    }

    int n = nums1.size();

    int low = 0;
    int high = n - 1;
    int x = nums1.size();
    int y = nums2.size();

    while (low <= high)
    {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y - partitionX) / 2;

        int maxleftX = partitionX > 0 ? nums1[partitionX - 1] : INT_MAX;
        int maxleftY = partitionY > 0 ? nums2[partitionY - 1] : INT_MAX;
        int minRightX = partitionX < x ? nums1[partitionX] : INT_MIN;
        int minRightY = partitionY < y ? nums2[partitionY] : INT_MIN;

        if (maxleftX < minRightY and maxleftY < minRightX)
        {

            if ((x + y) % 2 == 0)
            {
                return (double)((max(maxleftX, maxleftY) + min(minRightX, minRightY)) / 2.0);
            }
            else
            {
                return (double)((max(maxleftX, maxleftY)));
            }
        }
        else if (maxleftX > minRightY)
        {
            low = partitionX + 1;
        }
        else
        {
            high = partitionX - 1;
        }
    }
}

int main()
{

    return 0;
}