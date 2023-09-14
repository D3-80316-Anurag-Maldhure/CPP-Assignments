import java.util.*;

public class q14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string you want to check: ");
        String input = sc.next();
        sc.close();

        if (isPalindrome(input)) {
            System.out.println(input + " is a palindrome.");
        } else {
            System.out.println(input + " is not a palindrome.");
        }
    }

      public static boolean isPalindrome(String str) {
        // Remove spaces and convert to lowercase 
        str = str.toLowerCase();
        
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
}
