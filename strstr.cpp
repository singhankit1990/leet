#include<iostream>
#include<string>

class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int hay = haystack.size();
        int nee = needle.size();
        int pos = -1;
        int len;
        if (nee == 0)
        {
            pos = 0;
            
        }
        else if (nee == 1)
        {
            len = hay;
        }
        else if (nee > 1)
        {
            len = hay - nee +1;
        }

        for (int i = 0; i < len; i += 1)
        {
            string match = haystack.substr(i, nee);
            if (match == needle)
            {
                pos = i;
                break;
            }
        }
        return pos;
    }
};

int main(){
  string haystack = "hello", needle = "ll";
  Solution s;
  cout<<s.strStr(haystack,needle)<<endl;
  
  return 0;}
