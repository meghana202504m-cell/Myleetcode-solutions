class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0,right=s.size()-1;
        while(left<right){
            char temp=s[left];  //swap(s[left],s[right])
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
};