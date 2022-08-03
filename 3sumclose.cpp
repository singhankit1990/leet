#include <iostream>
#include <vector>

class Solution
{
public:
    int threeSumClosest(std::vector<int> &nums, int target)
    {
        int sum ; 
        int min = 100000000;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    int diff = nums[i] + nums[j] + nums[k] - target ;

                    if (abs(diff) < min )

                    {
                        min = abs(diff);
                        sum =  nums[i] + nums[j] + nums[k];
                    }
                }
            } 
        }

    return sum;
    }
};

int main()
{
    std::vector<int> nums = {-100, -98, -2, -1};
    int target = -101;
        Solution s;
    std::cout<<s.threeSumClosest(nums,target);
}
