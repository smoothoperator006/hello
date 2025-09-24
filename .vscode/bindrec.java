public class bindrec
{
    public static void main(String args[])
    {
        bindrec obj=new bindrec();
        int n=66;
        int b=obj.decimaltobinary(n);
        System.out.println("the binary form of "+n+" is "+b);
    }
    int decimaltobinary(int n)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            return n%2+10*(decimaltobinary(n/2));
        }
    }
}