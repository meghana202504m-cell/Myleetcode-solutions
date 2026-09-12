class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int ws=0,count = 0;
        for(int i=0;i<k;i++){
            ws+=arr[i];
        }
        if(ws/k>=threshold)count++;
        for(int i=k;i<arr.length;i++){
            ws+=arr[i]-arr[i-k];
            if(ws/k>=threshold)count++;
        }
        return count;
    }
}