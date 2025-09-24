import java.util.*;
public class binary {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter an array of 10 numbers");
        int arr[]=new int[10];
        for(int i=0;i<10;i++)
        {
            arr[i]=sc.nextInt();
        }
        int low;
        low=arr[0];

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9-i;j++)
            {
            if(arr[j]<arr[j++])
            {
                int d=arr[j];
                arr[j]=arr[j++];
                arr[j++]=d;
            }
        }
        
        }
        for (int i = 0; i < 10; i++)
         {
            System.out.println(arr[i]);
        }
    }
}

