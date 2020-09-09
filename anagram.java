import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0) {
            String str1 = s.next();
            String str2 = s.next();
            HashMap<Character, Integer> map1 = new HashMap<>();
            HashMap<Character, Integer> map2 = new HashMap<>();

            for(int i = 0; i < str1.length(); i++) {
                if(map1.containsKey(str1.charAt(i))) {
                    map1.put(str1.charAt(i), map1.get(str1.charAt(i))+1);
                } else {
                    map1.put(str1.charAt(i), 1);
                }
            }

            for(int i = 0; i < str2.length(); i++) {
                if(map2.containsKey(str2.charAt(i))) {
                    map2.put(str2.charAt(i), map2.get(str2.charAt(i))+1);
                } else {
                    map2.put(str2.charAt(i), 1);
                }
            }

            if(map1.equals(map2)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}

