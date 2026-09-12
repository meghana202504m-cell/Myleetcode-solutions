class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()) return false;
        
        char[] arr1=s.toCharArray(); // {'t', 'e','a'}
        char[] arr2=t.toCharArray();// {'e','a','t'}
        Arrays.sort(arr1);//{'a','e','t'}
        Arrays.sort(arr2);//{'a','e','t'}
        return Arrays.equals(arr1,arr2);  //equals is from arrays not from strings
    }
}