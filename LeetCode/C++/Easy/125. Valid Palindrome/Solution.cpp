class Solution {
public:
    bool isPalindrome(string s) {
        string filter;
        for(char ch:s){
            if(isalnum(ch)){
                filter+=tolower(ch);
            }
        }
        string rev=filter;
        reverse(rev.begin(),rev.end());
        return filter==rev;
    }
};