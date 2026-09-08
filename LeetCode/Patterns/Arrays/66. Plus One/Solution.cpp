class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){   //to access the elements in vectors
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);   //at 0th position add 1 and all other elemnts will move forward of 1 position 
         return digits;  
    }
};