import java.util.*;

public class binarysearchrec {

    int binarysearch(int arr[],int left,int right,int num)
    {
        if(left>right)
        {
            return -1;
        }
        int mid=(left+right)/2;
        if(num==arr[mid])
        {
            return mid;
        }
        if(num<arr[mid])
        {
            return binarysearch(arr,left,mid-1,num);
        }
        else
        {
            return binarysearch(arr,mid+1,right,num);
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter limit of array");
        int n=sc.nextInt();
        System.out.println("Enter "+n+" numbers in sorted format");
        binarysearchrec obj=new binarysearchrec();
        int arr[]=new int [n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter number u wanna search");
        int num=sc.nextInt();
        int index=obj.binarysearch(arr,0,n,num);
        if(index==-1)
        {
            System.out.println("The number does not exist in the array");
        }
        else
        {
            System.out.println("The number is foudn at index "+index);
        }
    }
}
    
