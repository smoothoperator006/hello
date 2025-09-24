import java.util.*;
public class binaryrec {
    int binary(int arr[],int left,int right,int num)
    {
        if(left<right)
        {
            return -1;
        }
        int mid=(left+right)/2;
        if(num==arr[mid])
        {
            return 1;
        }
        if(num<arr[mid])
        {
            return binary(arr,left,mid-1,num);
        }
        else
        {
            return binary(arr,mid+1,right,num);
        }
    }
    
}
