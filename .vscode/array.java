import java.util.*;
public class array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER THE LENGHT PF ARRAY");
        int len=sc.nextInt();
        int a[]=new int[len];
        System.out.println("Enter the numbers");
        for(int i=0;i<len;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println("Enter the number you want");
        int num=sc.nextInt();
        int k=0;
        for(int i=0;i<len;i++)
        {
            if(a[i]==num)
            {
              System.out.println("the index is:"+i);
              k++;
            }
        }
        if(k==0)
        {
            System.out.println("the number is not present");
        }
    }
    
}
