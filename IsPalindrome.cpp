#include<iostream>
#include<string>


class Solution {
public:
    bool isPalindrome(int x) {
        
        string y = to_string(x);
        int n = y.length();
        for ( int i = 0 ; i<n/2;i++){
            
        swap(y[i], y[n - i - 1]);
        }
        if (y == to_string(x)){
            return true;}
            else{
                return false;
            }
        }
    
};

int main(){
  int a = 1234;
  Solution s;
  cout<<boolalpha<<s.isPalindrome(a)<<endl;
  return 0;
}
