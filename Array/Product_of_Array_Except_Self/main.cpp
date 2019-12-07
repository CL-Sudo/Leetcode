#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> rst(nums.size());
    rst[0] = 1;
    int temp = rst[0];

    for (int i = 1; i < nums.size(); i++)     
        rst[i] = nums[i-1] * rst[i-1];

    temp  = 1;
    for (int j = nums.size()-2; j >= 0; j--) {
        rst[j] = rst[j] * temp * nums[j+1];
        temp = temp * nums[j+1];
    }
    return rst;
}

int main()
{
    vector<int> nums {1,2,3,4};

    for (auto n : productExceptSelf(nums))
        cout << n << " ";
    

    return 0;
}