// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
import java.util.*;
public class stacks {
    public static void main(String[] args) {
      String s = "taco";
      System.out.println(palindrome(s));

    }

    public static boolean palindrome(String s) {

        Stack<Character> stack = new Stack<>();
        char[] charArray = s.toCharArray();
// push all characters onto stack
        for (char c : charArray) {
            stack.push(c);
        }
// pop all off stack and compare with original string
        for (char c : charArray) {
            char top = stack.pop();
// if not the same, return false
            if (top != c) {
                boolean b = false;
                return b;
            }
        }
// else return tru
        // Press Opt+Enter with your caret at the highlighted text to see how
        // IntelliJ IDEA suggests fixing it.
return true;
    }
}
