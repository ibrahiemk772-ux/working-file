public class string {
    public static void main(String[] args) {
        String str1 = "Hello";
        String str2 = "world";
        System.out.println(str1.charAt(0));
        System.out.println(str1.equals(str2));
        // removing the whitespace
        String str3 = "   hello   ";
        System.out.println(str3.trim());
        System.out.println(str1.concat(str2));
        String  str4 = str1.concat(str2).concat(str3);
        System.out.println(str4);
        String k = "hello";
        String l = "kia\r hall \"bahi\" ha";
        String m = k + l;
        System.out.println(Math.pow(2,3));
        
    }
}
