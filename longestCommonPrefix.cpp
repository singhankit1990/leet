#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans;
        string temp;
        bool flag = true;
        int k = 0;
        while (flag)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                // for ( int k = 0 ; k < strs[i].length();k++){
                string a = strs[j];
                temp.push_back(a[k]);
            }

            int i = 0;
            while (temp[i] == temp[0] && i < temp.size())
            {
                i++;
            }

            if (i == temp.size() - 1)
            {
                ans.push_back(temp[0]);
                k++;
            }
            else
            {
                flag = false;
            }
        }

        return ans;
    }
};

int main(){

    vector<string> str = { "flower",
                         "flow",
                         "flight" };

    Solution s;

    s.longestCommonPrefix(str);
    
}
