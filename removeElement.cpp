#include<iostream>
#include<vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
       
        for (int i = 0; i < nums.size(); i++){
            if ( nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
    
   return nums.size(); }
};

int main(){
  vector <int> nums = [3,2,2,3]; 
  int val = 3;
  Solution s;
  cout<<s.removeElement(nums,val)<<endl;
  cout<<nums<<endl;
  
  return 0;
}
