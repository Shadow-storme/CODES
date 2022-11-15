/*public class Array {
    public static void main(String[] args) {
        int marks[]={23,45,67,89,90};
        /*System.out.println(marks[0]);
        System.out.println(marks[1]);
        System.out.println(marks[2]);
        System.out.println(marks[3]);
        System.out.println(marks[4]);

        for(int i=marks.length-1;i>=0;i--)
        {
            System.out.println(marks[i]);
        }
    }
}*/
public class Array{
    public static void main(String[] args) {
        int a[]=new int[5];
        int n;int count=0;
        Scanner r=new Scanner(System.in);
        
            for(int i=0;i<=a.length;i++)
            {
                a[i]=r.nextInt();   //Integer value input
            }
            //Array elements print
            System.out.println("Array elemnts: ");
            for(int i=0;i<a.length;i++)
            {
                //Output Statement
                System.out.println(a[i]+"");
            }
            //item searching
            System.out.println("Enter search elemnts: ");
            //input:
            n=r.nextInt();
            for(int i=0;i<=a.length;i++)
            {
                if(a[i]==n)
                {
                    count++;
                }
                if(count>0)
                System.out.println("Item Found");
                else
                System.out.println("Iteem not found");
            }
    }
}