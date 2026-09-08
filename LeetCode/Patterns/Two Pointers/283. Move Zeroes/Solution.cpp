class Solution {
public:
    void moveZeroes(vector<int>& nums) {  //return type here is void 
        int pos=0;
        for(int n:nums){
         if(n!=0){
            nums[pos]=n;  //n=1
            pos++;
        }
        }
        while(pos<nums.size()){
          nums[pos]=0;
          pos++;
        }
    }
};