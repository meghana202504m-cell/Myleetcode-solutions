class Solution {
public:
    int lengthOfLastWord(string s) {  //use  bruteforce approach...c++ has no inbuilt function to remove whitespace
         int n=s.size()-1;
         while(n>=0 && s[n]==' '){
            n--;
         }
         int len=0;
         while(n>=0 && s[n]!=' '){
            len++;
            n--;
         }
         return len;
    }
};