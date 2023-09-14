public class q7 {
    public static void main(String[] args) {
        //edge case
        if (args.length == 0) {
            System.out.println("No number entered in command line argument");
            return;
        }

        int number = Integer.parseInt(args[0]);

        System.out.println("Table for " + number + ":");

        for (int i = 1; i <= 10; i++) {
            System.out.println(number + " x " + i + " = " + (number * i));
        }
    }
}