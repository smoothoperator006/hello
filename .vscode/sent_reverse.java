import java.util.*;
public class sent_reverse {
    public static void main(String args[])
    {
        sent_reverse obj=new sent_reverse();
        Scanner sc=new Scanner(System.in);
        String str="",s1="",s2="";
        System.out.println("Enter a string");
        str=sc.nextLine();
        int len=str.length();
        for(int i=0;i<=len-1;i++)
        {
            char ch1=str.charAt(i);
                if(ch1==' ')
                {
                    s1=str.substring(0,i);
                    for(int j=len-1;j>=0;j--)
            {
                char ch2=str.charAt(j);
                if(ch2==' ')
                {
                     s2=str.substring(len-1,j);
                     String temp=s1;
                     s1=s2;
                     s2=temp;
                }
            }
                }
            
        }
    }
}
