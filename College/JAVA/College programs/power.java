class power {
    public static void main(String ar[]) {
        int n = 2;
        int i;
        double x = 2.0;
        double y = 3.0;
        int a = 2;
        int b = 3;
        double sum = 0;
        int c = 0;
        while (true) {
            sum = sum + (Math.pow(x, a) / Math.pow(y, b));
            b = b + 3;
            a = a + 3;
            c++;
            if (c == n) {
                break;
            }
        }
        System.out.println(sum);
        for (i = 0; i < n; i++) {
            sum = sum + (Math.pow(x, a) / Math.pow(y, b));
            b = b + 3;
            a = a + 3;
        }
    }
}