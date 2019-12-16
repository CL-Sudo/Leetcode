#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int maxProfit(vector<int> prices)
{  
    int max = 0;
    int lowest = INT_MAX;

    for (auto p : prices) {
        max=(max<p-lowest)?p-lowest:max;
        lowest = (p < lowest)?p:lowest;                                                                                        
    }

    return max;
}

int main()
{
    vector<int> input {7,1,5,3,6,4};

    cout << maxProfit(input);

    return 0;
}