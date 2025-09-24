import java.util.*;
public class doublear {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows and cloums");
        int r=sc.nextInt();
        int c=sc.nextInt();
        int arr[][]=new int[r][c];
        System.out.println("Enter the numbers");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter the number");
        int num=sc.nextInt(),k=0;
                System.out.println("the matrix is");

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.err.println();
        }

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(arr[i][j]==num)
                {
                    System.out.println("the index is"+i+" "+j);
                    k++;
                }
            }
        }
        if(k==0)
        { 
            System.out.println("the number does not exist in the matrix");
        }
    }

    
}
