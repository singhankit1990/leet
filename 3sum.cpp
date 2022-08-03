#include<iostream>
#include<vector>



class Solution
{
public:
    std::vector<std :: vector<int>> threeSum(std ::vector<int> &nums)
    {
        std ::vector<std::vector<int>> out;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        std::vector<int> row;
                        row.push_back(nums[i]);
                        row.push_back(nums[j]);
                        row.push_back(nums[k]);
                        out.push_back(row);
                    }
                }
            }              // enter the code to remove duplicacy of the triplets 
        }

        return out;
    }
};

int main()
{
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution s;
    std::vector<std::vector<int>> ans = s.threeSum(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            std::cout << ans[i][j] << " ";
        std::cout << std::endl;
    }
}
  
