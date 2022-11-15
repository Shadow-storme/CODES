public class A{
    public static void main(String[] args) {
        String str = "successes";
        System.out.println("The given string is: " + str);

        int countFirstFreq = 0;
        int countSecondFreq = 0;
        char mostFrequent = '\"';
        char secondMostFrequent = '\"';


        for (int j = 0; j < str.length(); j++) {
            int count = 0;
            /* To make sure that we do not recount the same letter twice */
            if (mostFrequent != str.charAt(j)){
                for (int i = j; i < str.length(); i++) {
                    if (str.charAt(j) == str.charAt(i))
                        count++;
                }
            }
            /* To find the most frequent character */
            if (count > countFirstFreq) {
                mostFrequent = str.charAt(j);
                countFirstFreq = count;
            }
            /* To find the second most frequent character */
            else if (count > countSecondFreq ) {
                secondMostFrequent = str.charAt(j);
                countSecondFreq = count;
            }
        }
        System.out.println("The second most frequent char in the string is: " + secondMostFrequent);    }
}