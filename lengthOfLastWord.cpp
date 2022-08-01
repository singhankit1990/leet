#include<iostream>

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int last = 0;
        for (int i = len-1 ; i >=0; i--){
            if ( s[i] == ' ' && last !=0){
                break;
            }
                 else if ( s[i] != ' '){
                    last += 1;
                }
     }
        
   return last; }
    
};

int main (){
  string word = " Hello World " ;
  Solution s ;
  cout << s.lengthOfLastWord(word)<<endl;
  
}
