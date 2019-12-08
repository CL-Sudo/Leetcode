#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int max(int a, int b, int c)
{
    int max;

    max = (a > b)?a:b;
    max = (b > c)?b:c;

    return max;

}

int maxProduct(vector<int>& nums) {

    int lmax1 = 0, lmax2 = 0, gmax = INT_MIN;

    for (auto a : nums) {

        
    }


        
    return gmax;    
}

int main()
{   
    vector<int> nums{2,3,-2,4};

    cout << maxProduct(nums) << endl;

    return 0;
}