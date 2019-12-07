//Kadane's Algorithm
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int>& nums) {

    int local_max = 0;
    int global_max = INT_MIN;

    for (auto n : nums) {
        local_max = (n > local_max + n)? n: local_max + n;
        global_max = (global_max > local_max)? global_max:local_max;
    }

    return global_max;
}

int main ()
{
    vector<int> nums {-2,1,-3,4,-1,2,1,-5,4};

    cout << maxSubArray(nums);

    return 0;
}