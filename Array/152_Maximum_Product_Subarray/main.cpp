#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int maximum(int a, int b, int c)
{
    a = (a > b) ? a : b;
    a = (a > c) ? a : c;

    return a;
}
int minimum(int a, int b, int c)
{
    a = (a < b) ? a : b;
    a = (a < c) ? a : c;

    return a;
}

int maxProduct(vector<int>& nums) {

    int localMax, localMin, globalMax = INT_MIN;
    int tempMax = 1, tempMin = 1;

    for (int i = 0; i < nums.size(); i++) {

        localMin = minimum(nums[i], nums[i]*tempMin,nums[i]*tempMax);
        localMax = maximum(nums[i], nums[i]*tempMin,nums[i]*tempMax);
        globalMax = max(localMax,globalMax);
        tempMin = localMin; tempMax = localMax;
    }
    return globalMax;    
}

int main()
{   
    vector<int> nums{2,-5,-2,-4,3};

    cout << maxProduct(nums) << endl;

    return 0;
}