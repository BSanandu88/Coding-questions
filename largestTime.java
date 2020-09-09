class Solution {
    public String largestTimeFromDigits(int[] arr) {
        List<String>permutations = permutations(arr);
        String res = "";
        
        for(String p : permutations ){
            String HH = p.substring(0,2);
            String MM = p.substring(2);
            if(HH.compareTo("24") < 0 && MM.compareTo("60") < 0 && res.compareTo(HH + ":" + MM) < 0)
                res = HH + ":" + MM;
        }
    return res;
    }
    
    private List<String> permutations(int[] arr){
        String s ="";
        for(int a : arr){
            s += a;
        }
        List<String> list = new ArrayList();
        permutations(s,"",list);
        return list;
    }
    private void permutations(String s,String soFar,List<String>list){
        if(s.isEmpty()) list.add(soFar);
        for(int i = 0;i<s.length();i++){
            permutations(s.substring(0,i) + s.substring(i+1), soFar+s.charAt(i),list );
        }
    }
}