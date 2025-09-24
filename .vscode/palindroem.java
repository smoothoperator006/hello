import java.time.chrono.ThaiBuddhistChronology;
import java.util.*;
public class palindroem {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a word");
        String str=sc.nextLine();
        String s="",s2="";
        for(int i=0;i<(str.length())/2;i++)
        {
            s=s+str.charAt(i);
        }
        for(int j=str.length()-1;j>(str.length()/2);j--);
        {
            s2=s2+str.charAt(this.j);
        }
        System.out.println(s);
        System.out.println(s2);
    

        
}
}