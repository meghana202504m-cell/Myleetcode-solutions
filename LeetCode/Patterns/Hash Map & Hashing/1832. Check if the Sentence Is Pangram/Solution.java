class Solution {
    public boolean checkIfPangram(String sentence) {//pack my box with five dozen of lequor jugs
        HashSet<Character> set =new HashSet<>();
        for(int i=0;i<sentence.length();i++){
            set.add(sentence.charAt(i));
        }
        return set.size()==26;
    }
}