#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums);

int main()
{
    vector<int> list{1,2,3,2};
    if  (containsDuplicate(list)) 
        cout << "true";
    else 
        cout << "false";
    return 0;
}

bool containsDuplicate(vector<int>& nums)
{
    unordered_map<int, int> t;
    for (int i = 0; i < nums.size(); i++)
        if(++t[nums[i]] > 1) return true;
    return false;
}