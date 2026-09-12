class Solution {  //2d list return type is list inside list
    public List<List<String>> groupAnagrams(String[] strs) {  //Map
        Map<String,List<String>> map=new HashMap<>();
        for(String word:strs){
            char[] chars=word.toCharArray();
            Arrays.sort(chars);
            String key=new String(chars);
            if(!map.containsKey(key)){
                map.put(key,new ArrayList<String>());
            }
            map.get(key).add(word);
        }
        return new ArrayList<>(map.values());
    }
}