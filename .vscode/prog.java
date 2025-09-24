import java.util.Random;
public class prog {
    public static void main()
    {
    Random ran=new Random();
    /*'Random'class is predefined java class which is used to display random numbers,useful in 
    probability distribution,stock market,throwing a die,dealing cards,basically recreating real world scenarios*/
    int die=ran.nextInt(6)+1;
    System.out.println("the roll on the dies is "+die);
    }
}
