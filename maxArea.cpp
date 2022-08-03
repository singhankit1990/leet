#include<iostream>
#include<vector>


class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {

        int n = height.size();
        int max = 0 ;
        int h;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (height[j] > height[i])
                {
                    h = height[i];
                }
                else
                {
                    h = height[j];
                }
                int area = h * (j - i);
                if (area > max)
                {
                    max = area;
                }
            }
        }
        return max;
    }
};

int main(){
    std::vector<int> a = {1,1};

    Solution s;
    std::cout << s.maxArea(a);
}
