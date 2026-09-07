class Solution {
public:
    int hammingDistance(int x, int y) {
        int val=x^y;
        int count=0;
        while(val>0){
           //count+=(val&1);
           //val>>=1;
        val=val&(val-1);
        count++;
        }
        return count;
    }
};