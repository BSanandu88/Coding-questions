//Given two words beginWord and endWord, and a dictionary wordList, return the length of the shortest transformation sequence from beginWord to endWord, such that:

//Only one letter can be changed at a time.
//Each transformed word must exist in the word list.
//Return 0 if there is no such transformation sequence.

 



class Solution {
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        if(! wordList.contains(endWord)){
            return 0;
        }
        Set<String>begin = new HashSet<>();
        begin.add(beginWord);
        Set<String>word = new HashSet<>(wordList);
        
        return bfs(begin,endWord,word,1);
    }
    
    
    int bfs(Set<String>begin,String endWord,Set<String>word,int distance){
        
        Set<String>reachSet = new HashSet<>();
        word.removeAll(begin);
        
        for(String w : begin){
            for(int pos=0;pos<w.length();pos++){
                char[]  charArray = w.toCharArray();
                
                for(char c='a';c<='z';c++){
                    charArray[pos] = c;
                    String newWord = new String(charArray);
                    if(word.contains(newWord)){
                        if(newWord.equals(endWord)){
                            return distance + 1;
                        }
                        reachSet.add(newWord);
                    }
                }
            }
        }
        distance++;
        if(reachSet.isEmpty()){
            return 0;
        }
        return bfs(reachSet,endWord,word,distance);
    }
}